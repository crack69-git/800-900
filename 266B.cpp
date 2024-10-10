#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    char str[a];
    for(int i=0;i<a;i++){
        cin>>str[i];
    }
    str[a]='\0';
    while(b--){
        for(int i=0;i<a-1;i++){
            if(str[i]=='B' && str[i+1]=='G'){
                char temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
                i++;
            }
        }
    }
    for(int i=0;i<a;i++){
        cout<<str[i];
    }
return 0;
}
