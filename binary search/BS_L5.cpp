#include<bits/stdc++.h>
using namespace std;
bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0, high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return true;
            if(nums[low]==nums[mid] && nums[mid]== nums[high]){
                low=low+1;
                high=high-1;
                continue;
            }
            if(nums[low]<=nums[mid]) {
                if(nums[low]<=target && target<=nums[mid]){
                    high=mid-1;
                }
                else low=mid+1;
            }
            else{
                if(nums[mid]<=target && target<=nums[high]){
                    low=mid+1;
                }
                else high=mid-1;
            }
        }
        return false;
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
    cout<<search(nums,8);
}
