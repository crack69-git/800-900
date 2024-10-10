#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int maxh = arr[0];
    int maxi = 0;
    for(int i = 1; i < n; ++i) {
        if(arr[i] > maxh) {
            maxh= arr[i];
            maxi = i;
        }
    }
    int minh= arr[0];
    int mini= 0;
    for(int i = 1; i < n; ++i) {
        if(arr[i] <= minh) {
            minh = arr[i];
            mini = i;
        }
    }
    int s= maxi+ (n - 1 - mini);
    if(maxi> mini) {
        s-= 1;
    }
    cout << s << endl;
    return 0;
}
