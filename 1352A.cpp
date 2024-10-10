#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        if(n>=1 && n<=9){
            cout<<n;
            cnt++;
        }
        else{
            while(n>=10){
                int last=n%10;
                if(last!=0)
                n/=10;
            }
        }
        cout<<cnt<<endl;
    }
return 0;
}
