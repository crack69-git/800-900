#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    bool chk[d];
    int arr[d],cnt=0;
    for(int i=0;i<d ;i++){
        arr[i]=i+1;
        chk[i]=false;
    }
    for(int i=0;i<d;i++){
        if(arr[i]%k==0 && !chk[i]){
            chk[i]=true;
            cnt++;
        }
        else if(arr[i]%l==0 && !chk[i]){
            chk[i]==true;
            cnt++;
        }
        else if(arr[i]%m==0 && !chk[i]){
            chk[i]=true;
            cnt++;
        }
        else if(arr[i]%n==0 && !chk[i]){
            chk[i]=true;
            cnt++;
        }
    }
    cout<<cnt;
return 0;
}
