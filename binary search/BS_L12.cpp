#include<bits/stdc++.h>
using namespace std;
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int m=*max_element(piles.begin(),piles.end());
        int low=1, high=m;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2; 
            long long total=0;
            for(int i=0;i<n;i++){
                total+=ceil((double)piles[i]/(double)mid);
            }
            if(total<=h) {
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
    cout<<minEatingSpeed(nums,8);
}