#include<bits/stdc++.h>
using namespace std;
vector<int> nextPermutation(vector<int>& nums) {
        int ind=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind=i;;
                break;
            }
        }
        if(ind==-1){
            reverse(nums.begin(),nums.end());
            return nums;
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1,nums.end());
        for (auto it=nums.begin();it!=nums.end();it++){
        cout<<*(it)<<" ";
        }
        return nums;
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
    nextPermutation(nums);
}