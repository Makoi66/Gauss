#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include "my_vector.h"
#include "my_matrix.h"

class GaussSolver {
private:
    std::vector<Vector> res;
public:
    std::vector<Vector> solve(const Matrix& A, const Vector& b) {
        int n = A.rows();
        int m = A.cols();
        Matrix A_copy = A; // создаем копию матрицы
        Vector b_copy = b; // создаем копию вектора

        std::vector<int> pivot(m, -1);

        // прямой ход Гаусса
        for (int i = 0; i < std::min(n, m); i++) {
            // поиск максимального элемента в столбце
            double maxEl = std::abs(A_copy(i, i));
            int maxRow = i;
            for (int k = i + 1; k < n; k++) {
                if (std::abs(A_copy(k, i)) > maxEl) {
                    maxEl = std::abs(A_copy(k, i));
                    maxRow = k;
                }
            }

            // swap максимальной строки с текущей строкой
            if (maxEl == 0) {
                // проверка на совместимость системы
                bool allZero = true;
                for (int j = i; j < m; j++) {
                    if (A_copy(i, j) != 0) {
                        allZero = false;
                        break;
                    }
                }
                if (allZero && b_copy[i] != 0) {
                    // система не имеет решений
                    return {};
                }
                continue; // переходим к следующей строке
            }

            for (int k = i; k < m; k++) {
                std::swap(A_copy(maxRow, k), A_copy(i, k));
            }
            std::swap(b_copy[maxRow], b_copy[i]);

            // делать все строки ниже текущей ведущей строки 0 в текущем столбце
            pivot[i] = i;
            for (int k = i + 1; k < n; k++) {
                if (A_copy(k, i) == 0) continue;
                double c = -A_copy(k, i) / A_copy(i, i);
                for (int j = i; j < m; j++) {
                    if (i == j) {
                        A_copy(k, j) = 0;
                    }
                    else {
                        A_copy(k, j) += c * A_copy(i, j);
                    }
                }
                b_copy[k] += c * b_copy[i];
            }
        }

        // ранг матрицы
        int rank = 0;
        for (int i = 0; i < std::min(n, m); i++) {
            if (pivot[i] != -1) {
                rank++;
            }
        }

        // система имеет бесконечно много решений
        if (rank < m) {
            std::vector<Vector> solutions;

            // найти одно решение
            Vector particular_solution(m);
            for (int i = rank - 1; i >= 0; i--) {
                if (pivot[i] != -1) {
                    particular_solution[pivot[i]] = b_copy[i];
                    for (int j = i + 1; j < m; j++) {
                        particular_solution[pivot[i]] -= A_copy(i, j) * particular_solution[j];
                    }
                    particular_solution[pivot[i]] /= A_copy(i, i);
                }
            }
            solutions.push_back(particular_solution);

            // найти базисы
            for (int free_var = 0; free_var < m; free_var++) {
                if (std::find(pivot.begin(), pivot.end(), free_var) == pivot.end()) {
                    Vector basis(m);
                    basis[free_var] = 1;
                    for (int i = rank - 1; i >= 0; i--) {
                        if (pivot[i] != -1) {
                            for (int j = i + 1; j < m; j++) {
                                basis[pivot[i]] -= A_copy(i, j) * basis[j];
                            }
                            basis[pivot[i]] /= A_copy(i, i);
                        }
                    }
                    solutions.push_back(basis);
                }
            }
            return solutions;
        }

        // обратная подстановка для нахождения решения
        Vector x(m);
        for (int i = m - 1; i >= 0; i--) {
            if (pivot[i] == -1) continue;
            x[pivot[i]] = b_copy[i];
            for (int j = i + 1; j < m; j++) {
                x[pivot[i]] -= A_copy(i, j) * x[j];
            }
            x[pivot[i]] /= A_copy(i, i);
        }
        return { x };
    }
};
