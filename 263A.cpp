#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int matrix[5][5];
    int r = 0, c = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                r = i;
                c = j;
            }
        }
    }
    int moves = abs(r - 2) + abs(c - 2);
    cout << moves << endl;

    return 0;
}

