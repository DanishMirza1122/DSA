#include<bits/stdc++.h>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int i=0;
    int j=0;
    int n1=a.size();
    int n2=b.size();
    vector<int> unionvector;
    while(i<n1 &&j<n2){
        if (a[i]<=b[j]){
            if(unionvector.size()==0 || unionvector.back()!=a[i]){
                unionvector.push_back(a[i]);
            }
            i++;
        }
        else {
            if (unionvector.size()==0 || unionvector.back()!=b[j]){
                unionvector.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(unionvector.size()==0 || unionvector.back()!=a[i]){
                unionvector.push_back(a[i]);
            }
            i++;
    }
    while(j<n2){
        if (unionvector.size()==0 || unionvector.back()!=b[j]){
                unionvector.push_back(b[j]);
            }
            j++;
    }
    
    for (auto it=unionvector.begin();it!=unionvector.end();it++){
        cout<<*(it)<<" ";
    }
    return unionvector;
}
int main(){
    int n1;
    int n2;
    cin>>n1;
    cin>>n2;
    vector<int> v1;
    vector<int> v2;
    for (int i=0;i<n1;i++) {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for (int i=0;i<n2;i++) {
        int y;
        cin>>y;
        v2.push_back(y);
    }
    sortedArray(v1,v2);
}