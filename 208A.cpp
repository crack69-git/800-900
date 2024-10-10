#include<bits/stdc++.h>
using namespace std;
int main(){
    string cpy="WUB",str;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        int cnt=0;
        for(int j=0;j<cpy.size();j++){
            if(str[j]==cpy[j]){
                cnt++;
            }
        }
    }
return 0;
}
