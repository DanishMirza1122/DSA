#include<bits/stdc++.h>
using namespace std;
int missingnum(vector <int> a, int N){
    int xor1=0,xor2=0;
    int n=N-1;
    for (int i=0;i<n;i++){
        xor2=xor2^(a[i]);
        xor1=xor1^(i+1);

    }
    xor1=xor1^N;
    int res=xor1^xor2;
    cout<<res;
    return res;
}
int main(){
    int N;
    cin>>N;
    vector<int> a;
    for (int i=0;i<N-1;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    missingnum(a,N);
}