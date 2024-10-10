#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int cnt=1;
    for(int i=0;i<t-1;i++){
        if((arr[i]=="10" && arr[i+1]=="01")||(arr[i]=="01" && arr[i+1]=="10")){
            cnt++;
        }
    }
    cout<<cnt;
return 0;
}
