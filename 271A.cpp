#include<bits/stdc++.h>
using namespace std;
bool Distinct(int year) {
    int digits[10] = {0};
    while (year > 0) {
        int digit = year % 10;
        if (digits[digit] == 1) {
            return false;
        }
        digits[digit] = 1;
        year /= 10;
    }
    return true;
}
int main() {
    int y;
    cin >> y;
    while (true) {
        y++;
        if (Distinct(y)) {
            cout << y << endl;
            break;
        }
    }
    return 0;
}
