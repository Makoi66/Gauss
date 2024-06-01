#pragma once
#include <iostream>
using namespace std;

class Vector {
private:
    double* a = nullptr;
    int N = 0;
public:
    Vector(int n) {
        this->N = n;
        this->a = new double[n];
        for (int i = 0; i < n; i++) {
            this->a[i] = 0;
        }
    }

    Vector(const Vector& p) {
        this->N = p.N;
        this->a = new double[p.N];
        for (int i = 0; i < p.N; i++) {
            this->a[i] = p.a[i];
        }
    }

    Vector& operator =(const Vector& p) {
        if (this == &p) {
            return *this;  // Проверка на самоприсваивание
        }
        if (this->N != p.N) {
            delete[] this->a;
            this->a = new double[p.N];
        }
        this->N = p.N;
        for (int i = 0; i < p.N; i++) {
            this->a[i] = p.a[i];
        }
        return *this;
    }

    ~Vector() { delete[] this->a; }

    double operator [](int index) const {
        return this->a[index];
    }

    double& operator [](int index) {
        return this->a[index];
    }

    void show() const {
        for (int i = 0; i < this->N; i++) {
            cout << this->a[i] << " ";
        }
        cout << endl;
    }

    int size() const {
        return N;
    }

    void resize(int n) {
        delete[] a;
        N = n;
        a = new double[n]();
    }
};