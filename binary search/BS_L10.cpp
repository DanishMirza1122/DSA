#include<bits/stdc++.h>
using namespace std;
    int sqrtnum(int n) {
        int ans=n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            arr.push_back(i);
        }
        int low = 1, high = n - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(mid*mid<=n) {
                ans=mid;
                low=mid+1;
            }
            else {
                high=mid-1;
            }
        }
        return ans;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<sqrtnum(n);
}
