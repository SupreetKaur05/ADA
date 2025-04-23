#include <iostream>
#include <vector>

using namespace std;

void printSolution(const vector<int>& board, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i] == j) {
                cout << "Q ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

bool isSafe(const vector<int>& board, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col || board[i] - i == col - row || board[i] + i == col + row) {
            return false;
        }
    }
    return true;
}

void NQueens(vector<int>& board, int row, int n) {
    if (row == n) {
        printSolution(board, n);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col)) {
            board[row] = col;
            NQueens(board, row + 1, n);
        }
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> board(n);
    NQueens(board, 0, n);

    return 0;
}
