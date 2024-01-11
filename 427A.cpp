#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t],re=0,c,cnt=0;
    for(int i=0;i<t;i++){
        cin>>a[i];
        if(a[i]>0){
            if(re<0){
                re=0;
            }
            re+=a[i];
        }
        else{
            c=a[i];
            re+=c;
            if(re<0){
                cnt++;
            }
        }
    }
    cout<<cnt;
return 0;
}
