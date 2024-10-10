#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<a;i++){
        if(arr[i]<5){
            if(5-arr[i]>=k){
                cnt++;
            }
        }
    }
    if(cnt%3==0){
        cout<<cnt/3;
    }
    else{
        cout<<"0";
    }
    return 0;
}
