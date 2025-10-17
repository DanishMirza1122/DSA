#include<bits/stdc++.h>
using namespace std;
    int func(vector<int> &weights,int cap){
            int day=1,load=0;
            for(int i=0;i<weights.size();i++){
                if(load+weights[i]>cap){
                    day+=1;
                    load=weights[i];
                }
                else{
                    load+=weights[i];
                }
            }
            return day;
        }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        int ans=0;
        for(int i=0;i<n;i++){
            high+=weights[i];
        }
        while(low<=high){
            int mid=(low+high)/2;
            int daysreq=func(weights,mid);
            if(daysreq<=days){
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
    cout<<shipWithinDays(nums,8);
}