#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    /*int maxi=arr[0];
    for (int i=1;i<n;i++){
        if (arr[i]>maxi) maxi= arr[i];
    }
    cout<<maxi<<endl;
    int secmax=INT_MIN;
    for (int i=0;i<n;i++){
        if (arr[i]<maxi && arr[i]> secmax){
            secmax=arr[i];
        }
    }
    cout<<secmax;*/
    int i=0;
    for (int j=1;j<n;j++){
        if (arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<i+1<<endl;











}