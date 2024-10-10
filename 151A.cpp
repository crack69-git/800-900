#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    // n = number of friends
    // k = number of bottles of soft drink
    // l = amount of drink in each bottle (milliliters)
    // c = number of limes
    // d = number of slices per lime
    // p = total amount of salt (grams)
    // nl = milliliters of drink needed for one toast
    // np = grams of salt needed for one toast
    int total_drink_toasts = (k * l) / nl;
    int total_lime_slices = c * d;
    int total_salt_toasts = p / np;
    int toasts = min({total_drink_toasts, total_lime_slices, total_salt_toasts}) / n;
    cout << toasts;
    return 0;
}
