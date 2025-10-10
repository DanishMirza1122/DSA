#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    long long sum=0;
    long long maxi=LONG_MIN;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum>maxi) maxi=sum;
        if(sum<0) sum=0;
    }
    if (maxi <0) maxi=0;
    return maxi;  
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
    cout<<maxSubArray(nums);
    
}