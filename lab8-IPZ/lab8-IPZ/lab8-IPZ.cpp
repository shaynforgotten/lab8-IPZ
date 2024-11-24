#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    //TASK 8.1
    double x[] = { 1, 1.2, -0.3, 0.7 };
    double y[] = { 3, 8, 2, -1.5 };

    const int xSize = sizeof(x) / sizeof(x[0]);
    const int ySize = sizeof(y) / sizeof(y[0]);

    double z[xSize][ySize];

    for (int i = 0; i < xSize; i++) {
        for (int j = 0; j < ySize; j++) {
            z[i][j] = pow(x[i], 3) * exp(-y[j] * x[i]) * sin(x[i]);
        }
    }

    cout << fixed << setprecision(4);
    cout << "z = x^3 * e^(-yx) * sin(x)\n\n";

    cout << setw(10) << "x\\y";
    for (int j = 0; j < ySize; j++) {
        cout << setw(10) << y[j];
    }
    cout << endl;

    for (int i = 0; i < xSize; i++) {
        cout << setw(10) << x[i];
        for (int j = 0; j < ySize; j++) {
            cout << setw(10) << z[i][j];
        }
        cout << endl;
    }

    //TASK 8.2 
    const int m = 3; 
    const int n = 6; 

    int A[m][n] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18}
    };

    cout << "Original Matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] % 2 == 0) {
                A[i][j] = 0;
            }
        }
    }

    cout << "\nModified Matrix (Even elements replaced by 0):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    //TASK 8.3 
    const int rows = 3;
    const int cols = 7;

    int A[rows][cols] = {
        {1, 2, 3, 4, 5, 6, 7},
        {8, 9, 10, 11, 12, 13, 14},
        {15, 16, 17, 18, 19, 20, 21}
    };

    cout << "Original Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    const int newCols = cols - 1;
    int B[rows][newCols];

    for (int i = 0; i < rows; i++) {
        int colIndex = 0; 
        for (int j = 0; j < cols; j++) {
            if (j != 4) { 
                B[i][colIndex++] = A[i][j];
            }
        }
    }

    cout << "\nModified Matrix (5th column removed):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < newCols; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
}
