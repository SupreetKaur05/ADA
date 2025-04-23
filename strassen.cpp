#include <iostream>
#include <vector>

using namespace std;

void add(const vector<vector<int>>& A, const vector<vector<int>>& B, vector<vector<int>>& C, int size) {
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void subtract(const vector<vector<int>>& A, const vector<vector<int>>& B, vector<vector<int>>& C, int size) {
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            C[i][j] = A[i][j] - B[i][j];
}

void strassen(const vector<vector<int>>& A, const vector<vector<int>>& B, vector<vector<int>>& C, int size) {
    if (size == 1) {
        C[0][0] = A[0][0] * B[0][0];
        return;
    }

    int newSize = size / 2;
    vector<vector<int>> A11(newSize, vector<int>(newSize)), A12(newSize, vector<int>(newSize)),
                        A21(newSize, vector<int>(newSize)), A22(newSize, vector<int>(newSize)),
                        B11(newSize, vector<int>(newSize)), B12(newSize, vector<int>(newSize)),
                        B21(newSize, vector<int>(newSize)), B22(newSize, vector<int>(newSize)),
                        M1(newSize, vector<int>(newSize)), M2(newSize, vector<int>(newSize)),
                        M3(newSize, vector<int>(newSize)), M4(newSize, vector<int>(newSize)),
                        M5(newSize, vector<int>(newSize)), M6(newSize, vector<int>(newSize)),
                        M7(newSize, vector<int>(newSize)),
                        AResult(newSize, vector<int>(newSize)), BResult(newSize, vector<int>(newSize));

    for (int i = 0; i < newSize; i++) {
        for (int j = 0; j < newSize; j++) {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + newSize];
            A21[i][j] = A[i + newSize][j];
            A22[i][j] = A[i + newSize][j + newSize];
            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + newSize];
            B21[i][j] = B[i + newSize][j];
            B22[i][j] = B[i + newSize][j + newSize];
        }
    }

    add(A11, A22, AResult, newSize);
    add(B11, B22, BResult, newSize);
    strassen(AResult, BResult, M1, newSize);

    add(A21, A22, AResult, newSize);
    strassen(AResult, B11, M2, newSize);

    subtract(B12, B22, BResult, newSize);
    strassen(A11, BResult, M3, newSize);

    subtract(B21, B11, BResult, newSize);
    strassen(A22, BResult, M4, newSize);

    add(A11, A12, AResult, newSize);
    strassen(AResult, B22, M5, newSize);

    subtract(A21, A11, AResult, newSize);
    add(B11, B12, BResult, newSize);
    strassen(AResult, BResult, M6, newSize);

    subtract(A12, A22, AResult, newSize);
    add(B21, B22, BResult, newSize);
    strassen(AResult, BResult, M7, newSize);

    add(M1, M4, AResult, newSize);
    subtract(AResult, M5, BResult, newSize);
    add(BResult, M7, C, newSize);

    add(M3, M5, C, newSize);
    add(C, M2, AResult, newSize);
    subtract(AResult, M4, C, newSize);

    add(M2, M4, AResult, newSize);
    for (int i = 0; i < newSize; i++) {
        for (int j = 0; j < newSize; j++) {
            C[i][j + newSize] = AResult[i][j];
            C[i + newSize][j] = AResult[i][j];
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the matrix (power of 2): ";
    cin >> size;

    vector<vector<int>> A(size, vector<int>(size)), B(size, vector<int>(size)), C(size, vector<int>(size, 0));

    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> B[i][j];
        }
    }

    strassen(A, B, C, size);

    cout << "Resulting Matrix C:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
