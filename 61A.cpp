#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    for(int i=0;i<a.size();i++){
        int n,m;
        n=a[i]-'0';
        m=b[i]-'0';
        if((n==1 && m==0)||(n==0 && m==1)){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    }
return 0;
}
