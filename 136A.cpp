#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],brr[n],crr[n];
    for(int i=0;i<n;i++){
        brr[i]=i+1;
        cin>>arr[i];
    }
    bool chk[n]={false};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(brr[i]==arr[j] && !chk[j]){
                chk[j]==false;
                crr[i]=j+1;
            }
        }
        cout<<crr[i]<<" ";
    }
return 0;
}
