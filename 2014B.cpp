#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t],b[t];
    bool chk[t],chk1[t];
    for(int i=0;i<t;i++){
        cin>>a[i]>>b[i];
        chk[i]=chk1[i]=false;
    }
    int cnt=0;
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(a[i]==b[j] && i!=j && !chk[i] && !chk1[i]){
                cnt++;
                chk[i]=true;
            }
            if(b[i]==a[i] && i!=j && !chk1[i] && !chk[i]){
                cnt++;
                chk1[i]=true;
            }
        }
    }
    cout<<cnt;
return 0;
}
