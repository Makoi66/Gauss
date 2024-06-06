#include <iostream>
#include "my_vector.h"
#include "my_matrix.h"
#include "my_gauss.h"
using namespace std;


int main() {
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

    /*cout << endl;
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
    cout << "\n\n\n" << endl;*/

    /*cout << endl;
    Matrix A(3, 3);
    A(0, 0) = 1; A(0, 1) = 2; A(0, 2) = 3;
    A(1, 0) = 2; A(1, 1) = 3; A(1, 2) = 4;
    A(2, 0) = 3; A(2, 1) = 4; A(2, 2) = 5;
    A.show();
    cout << "-----" << endl;
    Vector b(3);
    b[0] = 4;
    b[1] = 5;
    b[2] = 6;
    b.show();
    cout << "\n\n\n" << endl;*/

    /*cout << endl;
    Matrix A(3, 2);
    A(0, 0) = 1; A(0, 1) = 2;
    A(1, 0) = 1; A(1, 1) = 2;
    A(2, 0) = 2; A(2, 1) = 3;
    A.show();
    cout << "-----" << endl;
    Vector b(3);
    b[0] = 3;
    b[1] = 3;
    b[2] = 4;
    b.show();
    cout << "\n\n\n" << endl;*/

    /*cout << endl;
    Matrix A(2, 1);
    A(0, 0) = 1;
    A(1, 0) = 2;
    A.show();
    cout << "-----" << endl;
    Vector b(2);
    b[0] = 1;
    b[1] = 2;
    b.show();
    cout << "\n\n\n" << endl;*/

    /*cout << endl;
    Matrix A(1, 1);
    A(0, 0) = 0;
    A.show();
    cout << "-----" << endl;
    Vector b(1);
    b[0] = 0;
    b.show();
    cout << "\n\n\n" << endl;*/

    /*cout << endl;
    Matrix A(1, 1);
    A(0, 0) = 1;
    A.show();
    cout << "-----" << endl;
    Vector b(1);
    b[0] = 1;
    b.show();
    cout << "\n\n\n" << endl;*/

    /*cout << endl;
    Matrix A(3, 3);
    A(0, 0) = 1; A(0, 1) = 1; A(0, 2) = 1;
    A(1, 0) = 2; A(1, 1) = 2; A(1, 2) = 2;
    A(2, 0) = 3; A(2, 1) = 3; A(2, 2) = 3;
    A.show();
    cout << "-----" << endl;
    Vector b(3);
    b[0] = 1;
    b[1] = 2;
    b[2] = 4;
    b.show();
    cout << "\n\n\n" << endl;*/

    /*cout << endl;
    Matrix A(3, 3);
    A(0, 0) = 1; A(0, 1) = 0; A(0, 2) = 0;
    A(1, 0) = 0; A(1, 1) = 1; A(1, 2) = 0;
    A(2, 0) = 0; A(2, 1) = 0; A(2, 2) = 1;
    A.show();
    cout << "-----" << endl;
    Vector b(3);
    b[0] = 1;
    b[1] = 1;
    b[2] = 1;
    b.show();
    cout << "\n\n\n" << endl;*/

    /*cout << endl;
    Matrix A(2, 1);
    A(0, 0) = 1;
    A(1, 0) = 2;
    A.show();
    cout << "-----" << endl;
    Vector b(2);
    b[0] = 1;
    b[1] = 1;
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

    ////554
    //cout << endl;
    //Matrix A(4, 4);
    //A(0, 0) = 2; A(0, 1) = 2; A(0, 2) = -1; A(0, 3) = 1;
    //A(1, 0) = 4; A(1, 1) = 3; A(1, 2) = -1; A(1, 3) = 2;
    //A(2, 0) = 8; A(2, 1) = 5; A(2, 2) = -3; A(2, 3) = 4;
    //A(3, 0) = 3; A(3, 1) = 3; A(3, 2) = -2; A(3, 3) = 2;
    //A.show();
    //cout << "-----" << endl;
    //Vector b(4);
    //b[0] = 4;
    //b[1] = 6;
    //b[2] = 12;
    //b[3] = 6;
    //b.show();
    //cout << "\n\n\n" << endl;

    ////703
    //cout << endl;
    //Matrix A(5, 4);
    //A(0, 0) = 8; A(0, 1) = 6; A(0, 2) = 5; A(0, 3) = 2;
    //A(1, 0) = 3; A(1, 1) = 3; A(1, 2) = 2; A(1, 3) = 1;
    //A(2, 0) = 4; A(2, 1) = 2; A(2, 2) = 3; A(2, 3) = 1;
    //A(3, 0) = 3; A(3, 1) = 5; A(3, 2) = 1; A(3, 3) = 1;
    //A(4, 0) = 7; A(4, 1) = 4; A(4, 2) = 5; A(4, 3) = 2;
    //A.show();
    //cout << "-----" << endl;
    //Vector b(5);
    //b[0] = 21;
    //b[1] = 10;
    //b[2] = 8;
    //b[3] = 15;
    //b[4] = 18;
    //b.show();
    //cout << "\n\n\n" << endl;

    ////709
    //cout << endl;
    //Matrix A(5, 4);
    //A(0, 0) = 45; A(0, 1) = -28; A(0, 2) = 34; A(0, 3) = -52;
    //A(1, 0) = 36; A(1, 1) = -23; A(1, 2) = 29; A(1, 3) = -43;
    //A(2, 0) = 35; A(2, 1) = -21; A(2, 2) = 28; A(2, 3) = -45;
    //A(3, 0) = 47; A(3, 1) = -32; A(3, 2) = 36; A(3, 3) = -48;
    //A(4, 0) = 27; A(4, 1) = -19; A(4, 2) = 22; A(4, 3) = -35;
    //A.show();
    //cout << "-----" << endl;
    //Vector b(5);
    //b[0] = 9;
    //b[1] = 3;
    //b[2] = 16;
    //b[3] = -17;
    //b[4] = 6;
    //b.show();
    //cout << "\n\n\n" << endl;

    ////Elena
    //cout << endl;
    //Matrix A(3, 3);
    //A(0, 0) = 1; A(0, 1) = 2; A(0, 2) = 3;
    //A(1, 0) = 3; A(1, 1) = -7; A(1, 2) = -1;
    //A(2, 0) = -2; A(2, 1) = 9; A(2, 2) = 4;
    //A.show();
    //cout << "-----" << endl;
    //Vector b(3);
    //b[0] = 6;
    //b[1] = 1;
    //b[2] = 5;
    //b.show();
    //cout << "\n\n\n" << endl;


    GaussSolver solver;
    std::vector<Vector> solution = solver.solve(A, b);


    if (solution.empty()) {
        std::cout << "The system has no solutions." << std::endl;
    }
    else if (solution.size() == 1) {
        std::cout << "The system has a unique solution: ";
        solution[0].show();
    }
    else {
        std::cout << "The system has infinitely many solutions. Basis vectors:" << std::endl;
        for (const Vector& sol : solution) {
            sol.show();
        }
    }

    return 0;
}
