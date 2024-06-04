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
        Matrix A_copy = A; // ������� ����� �������
        Vector b_copy = b; // ������� ����� �������

        std::vector<int> pivot(m, -1);

        // ������ ��� ������
        for (int i = 0; i < std::min(n, m); i++) {
            // ����� ������������� �������� � �������
            double maxEl = std::abs(A_copy(i, i));
            int maxRow = i;
            for (int k = i + 1; k < n; k++) {
                if (std::abs(A_copy(k, i)) > maxEl) {
                    maxEl = std::abs(A_copy(k, i));
                    maxRow = k;
                }
            }

            // swap ������������ ������ � ������� �������
            if (maxEl == 0) {
                // �������� �� ������������� �������
                bool allZero = true;
                for (int j = i; j < m; j++) {
                    if (A_copy(i, j) != 0) {
                        allZero = false;
                        break;
                    }
                }
                if (allZero && b_copy[i] != 0) {
                    // ������� �� ����� �������
                    return {};
                }
                continue; // ��������� � ��������� ������
            }

            for (int k = i; k < m; k++) {
                std::swap(A_copy(maxRow, k), A_copy(i, k));
            }
            std::swap(b_copy[maxRow], b_copy[i]);

            // ������ ��� ������ ���� ������� ������� ������ 0 � ������� �������
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

        // ���� �������
        int rank = 0;
        for (int i = 0; i < std::min(n, m); i++) {
            if (pivot[i] != -1) {
                rank++;
            }
        }

        // ������� ����� ���������� ����� �������
        if (rank < m) {
            std::vector<Vector> solutions;

            // ����� ���� �������
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

            // ����� ������
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

        // �������� ����������� ��� ���������� �������
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
