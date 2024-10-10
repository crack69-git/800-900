#include<bits/stdc++.h>
using namespace std;
int main(){
    string arr;
    getline(cin,arr);
    for(int i=0;i<arr.size();i++){
        if((arr[i]=='.' && arr[i+1]=='.') || (arr[i]=='.' && arr[i+1]=='-')||(arr[i]=='.')){
            cout<<"0";
        }
        else if(arr[i]=='-' && arr[i+1]=='.'){
            cout<<"1";
            i++;
        }
        else if(arr[i]=='-' && arr[i+1]=='-'){
            cout<<"2";
            i++;
        }
    }
return 0;
}
