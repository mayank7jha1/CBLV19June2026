#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    // Pattern 1: col <= row (on or below principal diagonal)
    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= n) {
            if (col <= row) {
                cout << "*";
            }
            col++;
        }
        cout << endl;
        row++;
    }

    cout << "-----------------------------" << endl << endl;

    // Pattern 2: col >= row (on or above principal diagonal)
    row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= n) {
            if (col >= row) {
                cout << "*";
            } else {
                cout << " ";
            }
            col++;
        }
        cout << endl;
        row++;
    }

    cout << "-----------------------------" << endl << endl;


    // Pattern 3: row + col <= n + 1 (on or above secondary diagonal)
    row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= n) {
            if (row + col <= n + 1) {
                cout << "*";
            }
            col++;
        }
        cout << endl;
        row++;
    }

    cout << "-----------------------------" << endl << endl;


    // Pattern 4: row + col >= n + 1 (on or below secondary diagonal)
    row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= n) {
            if (row + col >= n + 1) {
                cout << "*";
            } else {
                cout << " ";
            }
            col++;
        }
        cout << endl;
        row++;
    }

    cout << "-----------------------------" << endl << endl;

    return 0;
}
