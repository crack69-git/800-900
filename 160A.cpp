#include<bits/stdc++.h>
using namespace std;
void sorty(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n],sum=0,sum1=0,cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sum/=2;
    sorty(n,arr);
    for(int i=0;i<n;i++){
        sum1+=arr[i];
        cnt++;
        if(sum1>sum){
            cout<<cnt;
            break;
        }
    }
return 0;
}
