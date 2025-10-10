#include<bits/stdc++.h>
using namespace std;
/*int subarray(vector<int> a, long long k){
    map<long long, int> presummap;
    long long sum=0;
    int maxlen=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        if (sum==k){
            maxlen=max(maxlen,i+1);
        }
        long long rem=sum-k;
        if (presummap.find(rem)!=presummap.end()){
            int len=i-presummap[rem];
            maxlen=max(maxlen,len);
        
        }
        if(presummap.find(sum)==presummap.end()){
        presummap[sum]=i;}
    }
    cout<<"max length of subarray:"<<maxlen;
    return maxlen;
}*/
int longestsubarra(vector<int> a, long long k){
    int left=0, right=0;
    long long sum=a[0];
    int maxlen=0;
    int n=a.size();
    while(right<n){
        while(left<=right &&sum >k){
            sum-=a[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n) sum+=a[right];
    }
    cout<<maxlen;
    return maxlen;
}
int main(){
    cout<<"enter the length of array"<<endl;
    int n;
    cin>>n;
    vector<int> a;
    for (int i=0;i<n;i++){
        cout<<"enter element no."<<i<<endl;
        int x;
        cin>>x;
        
        a.push_back(x);
    }
    cout<<"enter the req sum of subarray"<<endl;
    int k;
    cin>>k;
    longestsubarra(a,k);
}