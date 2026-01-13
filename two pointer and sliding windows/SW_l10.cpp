#include<bits/stdc++.h>
using namespace std;
int fn(vector<int>& nums, int goal){
        if(goal<0) return 0;
        int l=0, r=0, sum=0, cnt=0;
        int n=nums.size();
        while (r<n){
            sum+=(nums[r]%2);
            while(sum>goal){
                sum=sum-(nums[l]%2);
                l++;
            }
            cnt+=r-l+1;
            r++;
        }
        return cnt;
}
int numberOfSubarrays(vector<int>& nums, int k) {
        return fn(nums, k)-fn(nums,k-1);
}