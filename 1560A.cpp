#include<bits/stdc++.h>
using namespace std;
bool chk(int n){
    int last=n%10;
    if(last==3){
        return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,save,cnt=1;
        cin>>a;
        for(int i=1;cnt<=a;i++){
            if(i%3==0 || chk(i)){
                continue;
            }
            else{
                save=i;
                cnt++;
            }
        }
        cout<<save<<endl;
    }
return 0;
}
