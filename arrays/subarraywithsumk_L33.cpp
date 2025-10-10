#include<bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        int presum=0;
        int n=nums.size();
        unordered_map<int,int> mpp;
        mpp[0]=1;
        for(int i=0;i<n;i++){
            presum+=nums[i];
            int extra=presum-k;
            cnt+=mpp[extra];
            mpp[presum]+=1;
        }
        return cnt;
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
    cout<<subarraySum(nums,12);
}