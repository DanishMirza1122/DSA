#include<bits/stdc++.h>
using namespace std;
void sortarray(vector<int> arr, int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid==1]) mid++;
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for (auto it=arr.begin();it!=arr.end();it++){
        cout<<*(it)<<" ";
    }

}
int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    vector<int> arr;
    for (int i=0;i<n;i++){
        cout<<"enter element no."<<i<<endl;
        int x;
        cin>>x; 
        arr.push_back(x);
    }
    sortarray(arr,n);
    
}