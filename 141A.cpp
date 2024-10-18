#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2,str3;
    getline(cin,str1);
    getline(cin,str2);
    getline(cin,str3);
    string str4=str1+str2;
    sort(str4.begin(),str4.end());
    sort(str3.begin(),str3.end());
    if(str4==str3){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
return 0;
}
