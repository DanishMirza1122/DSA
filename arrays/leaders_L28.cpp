#include<bits/stdc++.h>
using namespace std;
vector<int> leader(vector<int> &a){
    int n=a.size();
    int maxi=INT_MIN;
    vector<int> b;
    for(int i=n-1;i>=0;i--){
        if(a[i]>maxi) {
            b.push_back(a[i]);
        }
        maxi=max(a[i],maxi); 
    }
    sort(b.begin(),b.end());
    for (auto it=b.begin();it!=b.end();it++){
        cout<<*(it)<<" ";
    }
    return b;
}
int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    vector<int> a;
    for (int i=0;i<n;i++){
        cout<<"enter element no."<<i<<endl;
        int x;
        cin>>x; 
        a.push_back(x);
    }
    leader(a);
}