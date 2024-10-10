#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int drr[n];
    for(int i = 0; i < n; i++) {
        drr[i] = i + 1;
    }
    int a;
    cin >> a;
    int arr[a], crr[n];
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
        crr[i] = arr[i];
    }
    int b, cnt = 0;
    cin >> b;
    int c = a + b;
    int brr[b];
    for(int i = 0; i < b; i++) {
        cin >> brr[i];
        crr[a + i] = brr[i];
    }
    bool chk[n + 1] = {false};
    for(int i = 0; i < c; i++) {
        chk[crr[i]] = true;
    }
    for(int i = 1; i <= n; i++) {
        if (!chk[i]) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}
