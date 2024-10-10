#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int arr[a],sum=0;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<b;i++){
        if(arr[i]<0){
            sum+=arr[i];
        }
    }
    cout<<abs(sum);
return 0;
}
