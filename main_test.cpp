#include <iostream>
#include <vector>
#include <cmath>
#include "my_vector.h"
#include "my_matrix.h"
#include "my_gauss.h"
using namespace std;


int main() {
    /*cout << endl;
    Matrix A(3, 3);
    A(0, 0) = 2; A(0, 1) = -1; A(0, 2) = -2;
    A(1, 0) = -4; A(1, 1) = 6; A(1, 2) = 3;
    A(2, 0) = -4; A(2, 1) = -2; A(2, 2) = 8;
    A.show();
    cout << "-----" << endl;
    Vector b(3);
    b[0] = -3;
    b[1] = 9;
    b[2] = -6;
    b.show();
    cout << "\n\n\n" << endl;*/


    /*cout << endl;
    Matrix A(1, 5);
    A(0, 0) = 1; A(0, 1) = 2; A(0, 2) = 3; A(0, 3) = 4; A(0, 4) = 5;
    A.show();
    cout << "-----" << endl;
    Vector b(1);
    b[0] = 6;
    b.show();
    cout << "\n\n\n" << endl;*/


    /*cout << endl;
    Matrix A(1, 3);
    A(0, 0) = 0; A(0, 1) = 0; A(0, 2) = 0;
    A.show();
    cout << "-----" << endl;
    Vector b(1);
    b[0] = 0;
    b.show();
    cout << "\n\n\n" << endl;*/


    /*cout << endl;
    Matrix A(1, 3);
    A(0, 0) = 0; A(0, 1) = 0; A(0, 2) = 0;
    A.show();
    cout << "-----" << endl;
    Vector b(1);
    b[0] = 1;
    b.show();
    cout << "\n\n\n" << endl;*/


    /*cout << endl;
    Matrix A(3, 3);
    A(0, 0) = 0; A(0, 1) = 0; A(0, 2) = 0;
    A(1, 0) = 0; A(1, 1) = 0; A(1, 2) = 0;
    A(2, 0) = 0; A(2, 1) = 0; A(2, 2) = 0;
    A.show();
    cout << "-----" << endl;
    Vector b(3);
    b[0] = 0;
    b[1] = 0;
    b[2] = 0;
    b.show();
    cout << "\n\n\n" << endl;*/


    cout << endl;
    Matrix A(3, 3);
    A(0, 0) = 1; A(0, 1) = 1; A(0, 2) = 1;
    A(1, 0) = 2; A(1, 1) = 2; A(1, 2) = 2;
    A(2, 0) = 3; A(2, 1) = 3; A(2, 2) = 3;
    A.show();
    cout << "-----" << endl;
    Vector b(3);
    b[0] = 1;
    b[1] = 2;
    b[2] = 3;
    b.show();
    cout << "\n\n\n" << endl;


    GaussSolver solver;
    vector<Vector> solution = solver.solve(A, b);

    if (solution.empty()) {
        cout << "The system has no solutions." << endl;
    }
    else if (solution.size() == 1) {
        cout << "The system has a unique solution:" << endl;
        solution[0].show();
    }
    else {
        cout << "The system has infinitely many solutions. Basis vectors:" << endl;
        for (const Vector& sol : solution) {
            sol.show();
        }
    }

    return 0;
}
