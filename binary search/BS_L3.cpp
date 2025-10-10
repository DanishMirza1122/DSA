#include<bits/stdc++.h>
using namespace std;
int firstoccurrence(vector<int>& nums, int target){
    int n=nums.size();
    int low=0, high=n-1;
    int first=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]<=target){
            first =mid;
            high=mid-1;
        }
        else if(nums[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return first;
}
int lastoccurrence(vector<int>& nums, int target){
    int n=nums.size();
    int low=0, high=n-1;
    int last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]>target){
            last =mid;
            low=mid+1;
        }
        else if(nums[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return last;
}
pair<int,int> firstandlast(vector<int> &nums, int target){
    int first=firstoccurrence(nums, target);
    if (first==-1) return {-1,-1};
    int last=lastoccurrence(nums,target);
    cout<<first<<last;
    return {first, last};
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
    firstandlast(nums,8);
}