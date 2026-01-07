#include<bits/stdc++.h>
using namespace std;
int maxlength(vector<int> &arr, int k){
    map<int, int> mpp;
    int l=0, r=0, maxlen=0;
    while(r<arr.size()){
        mpp[arr[r]]++;
        if(mpp.size()>k){
            mpp[arr[l]]--;
            if(mpp[arr[l]]==0) mpp.erase(arr[l]);
            l++;
        }
        if(mpp.size()<=k) maxlen=max(maxlen, r-l+1);
        r++;
    }
    return maxlen;
}
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<maxlength(arr, 2);
}