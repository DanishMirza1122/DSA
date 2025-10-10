#include<bits/stdc++.h>
using namespace std;
vector<int> rearrange(vector<int> &a){
    vector<int> pos,neg;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]>0){
            pos.push_back(a[i]);
        }
        else{
            neg.push_back(a[i]);
        }
    }
    int x=pos.size();
    int y=neg.size();
        
    if(x>y){
        for(int i=0;i<y;i++){
            a[i*2]=pos[i];
            a[i*2+1]=neg[i];
        }
        int ind=2*y;
        for(int i=y;i<x;i++){
            a[y]=pos[i];
            ind++;
        }
    }
    else{
        for(int i=0;i<x;i++){
            a[i*2]=pos[i];
            a[i*2+1]=neg[i];
        }
        int ind=2*x;
        for(int i=y;i<x;i++){
            a[x]=pos[i];
            ind++;
        }
    }
    for (auto it=a.begin();it!=a.end();it++){
        cout<<*(it)<<" ";
    }
    return a;
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
    rearrange(a);
}