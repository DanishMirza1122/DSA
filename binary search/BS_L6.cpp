#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& arr) {
       int n=arr.size();
       int low=0, high=n-1;
       int ans=INT_MAX;
       while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[high]){
            ans=min(ans,arr[low]);
        }
        if(arr[low]<=arr[mid]){
            ans=min(ans,arr[low]);
            low=mid+1;
        }
        else {
            ans=min(ans, arr[mid]);
            high=mid-1;
        }
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
    cout<<findMin(nums);
}
