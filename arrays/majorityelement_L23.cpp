#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
        int cnt=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==nums[i]) cnt++;
        }
        if(cnt>nums.size()/2) return nums[i];
    }
    return 0;
}
int majorityelement(vector<int> &nums){
    map<int,int> mpp;
    for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
    }
    for(auto it: mpp){
        if(it.second> nums.size()/2) return it.first;
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    vector<int> nums;
    for (int i=0;i<n;i++){
        cout<<"enter element no."<<i<<endl;
        int x;
        cin>>x; 
        nums.push_back(x);
    }
    cout<<"majority element="<<majorityelement(nums);
}