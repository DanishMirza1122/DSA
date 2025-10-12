#include<bits/stdc++.h>
using namespace std;
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int m=*max_element(nums.begin(),nums.end());
        int low=1, high=m;
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            int target=0;
            for(int i=0;i<n;i++){
                target+=ceil((double)nums[i]/(double)mid);
            }
            if(target<=threshold){
               ans=mid;
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
    cout<<smallestDivisor(nums,8);
}