#include <bits/stdc++.h>
using namespace std;
void gcd(int n, int m){
    while(n>0 && m>0){
        if (n>m) n=n%m;
        else m=m%n;
    }
    if (n==0){
        cout<<m;
    }
    else if(m==0){
        cout<<n;
    }
}
int main(){
    int n;
    int m;
    cin>>n>>m;
    gcd(n,m);
    return 0;
}