#include<bits/stdc++.h>
using namespace std;
string exists(vector<int> a, int n,int target){
    int left=0;
    int right=n-1;
    sort(a.begin(),a.end());
    while (left<right){
        int sum=a[left]+a[right];
        if(sum==target){
            return "Yes";
        }
        else if(sum<target) left++;
        else right++;
    }
    return "No";
}
vector<int> twosum(vector<int> a, int n, int target){
    map<int,int> mpp;
    for (int i=0;i<n;i++){
        int num=a[i];
        int moreneeded=target-num;
        if (mpp.find(moreneeded)!=mpp.end()){
            vector<int> v={mpp[moreneeded],i};
            for (auto it=v.begin();it!=v.end();it++){
                 cout<<*(it)<<" ";
            }
            return v;
        }
        mpp[num]=i;
    }
    return {-1,1};
}
int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int target;
    cout<<"enter target sum"<<endl;
    cin>>target;
    vector<int> a;
    for (int i=0;i<n;i++){
        cout<<"enter element no."<<i<<endl;
        int x;
        cin>>x;
      
    a.push_back(x);
    }
    twosum(a,n,target);
}