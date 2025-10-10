#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int low, int mid, int high){
    vector<int> temp;
    int left =low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if (arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
            left++;
    }
    while(right<=high){
         temp.push_back(arr[right]);
            right++;
    }
    for (int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    
}
void mergesort(vector<int> &arr,int low, int high){
    if (low==high) return;
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
    
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    mergesort(v,0,n-1);
    for (auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
}

//time complexity O(n*log2(n)) because divided by 2 and merge takes n//
//SC is O(n) because temp only//