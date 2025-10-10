#include<bits/stdc++.h>
using namespace std;
int sumofn(int n){
    if(n<1) return 0;
    int res= n+sumofn(n-1);
    return res;
}
int main(){
    int n;
    cin>>n;
    cout<<sumofn(n);
}