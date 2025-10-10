#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0, high=n-1;
        int ans=n;
        ans=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        return ans;
}
int lowerbound1(vector<int>& nums, int target){
    int n=nums.size();
    int low=0, high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]<=target){
            ans =mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    return ans;
}
int upperbound1(vector<int>& nums, int target){
    int n=nums.size();
    int low=0, high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]>target){
            ans =mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter element "<<i<<" "<<endl;
        cin>>x;
        nums.push_back(x);
    }
    cout<<lowerbound1(nums,25);
}