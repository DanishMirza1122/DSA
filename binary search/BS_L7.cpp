#include<bits/stdc++.h>
using namespace std;
int timesrotated(vector<int>& arr) {
       int n=arr.size();
       int low=0, high=n-1;
       int ans=INT_MAX;
       int index=-1;
       while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[high]){
            if(arr[low]<ans){
                index=low;
                ans=arr[low];
            }
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<ans){
                index=low;
                ans=arr[low];
            }
            low=mid+1;
        }
        else {
            if(arr[mid]<ans){
                index=mid;
                ans=arr[mid];
            }
            high=mid-1;
        }
       }
       return index;
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
    cout<<timesrotated(nums);
}
