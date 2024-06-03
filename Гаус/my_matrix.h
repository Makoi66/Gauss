#pragma once
#include <iostream>
#include <vector>

class Matrix {
protected:
    int n = 0, m = 0;
    std::vector<std::vector<double>> arr;
public:
    Matrix(int n1, int m1) {
        this->n = n1;
        this->m = m1;
        for (int i = 0; i < n1; i++) {
            std::vector<double> row;
            for (int j = 0; j < m1; j++) {
                row.push_back(0);
            }
            this->arr.push_back(row);
        }
    }

    double operator()(int n1, int m1) const {
        return this->arr[n1][m1];
    }

    double& operator()(int n1, int m1) {
        return this->arr[n1][m1];
    }

    void show() const {
        for (int i = 0; i < this->n; i++) {
            for (int j = 0; j < this->m; j++) {
                std::cout << this->arr[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    int rows() const {
        return n;
    }

    int cols() const {
        return m;
    }
};