#include<bits/stdc++.h>
using namespace std;
/*void revarray(int i, int n, int arr[]){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    revarray(i+1,n,arr);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    revarray(0,n,arr);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}*/
bool palstring(int i,string st){
    if (i>=size(st)/2) return true;
    if (st[i]!=st[size(st)-i-1]) return false;
    return palstring(i+1,st);
}
int main(){
    string st;
    cin>>st;
    cout<<palstring(0,st);
} 