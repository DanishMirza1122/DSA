#include<bits/stdc++.h>
using namespace std;
/*int consones(int arr[],int n){
    int maxi=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            maxi=max(cnt,maxi);
        }
        else{
            cnt=0;
        }
    }
    cout<<maxi;
    return maxi;
}*/
int singleelement(int arr[],int n){
    int xor1=0;
    for (int i=0;i<n;i++){
        xor1=xor1^arr[i];
    }
    cout<<xor1;
    return xor1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) cin>>arr[i];
    singleelement(arr,n);
}