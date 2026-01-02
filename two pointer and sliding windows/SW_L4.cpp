#include<bits/stdc++.h>
using namespace std;
int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0, r=0;
        int maxlen=0;
        int c=0;
        while(r<n){
            if(nums[r]==0) c++;
            if(c>k){
                if(nums[l]==0) c--;
                l++;
            }
            if(c<=k) maxlen=max(maxlen,r-l+1);   
            r++;       
        }
        return maxlen;
}