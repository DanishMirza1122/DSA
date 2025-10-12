#include<bits/stdc++.h>
using namespace std;
    int nthroot(int n,int m) {
        int ans=n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            arr.push_back(i);
        }
        int low = 1, high = n ;
        while(low <= high){
            long long mid = (low + high) / 2;
            long long product=1;
            for(int i=0;i<m;i++){
                product=product*mid;
                if(product>n) break;
            }
            if(product==n) {
                return mid;
            }
            else if(product>n){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int m;
    cout<<"enter n"<<endl;
    cin>>m;
    cout<<nthroot(n,m);
}