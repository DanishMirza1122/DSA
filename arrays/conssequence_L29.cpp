#include<bits/stdc++.h>
using namespace std;
bool ls(vector<int> &arr,int nm){
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==nm) return true;
        }
        return false;
    };
int longestConsecutive(vector<int>& arr) {
        int longest=1;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int cnt=1;;
            int x=arr[i];
            while(ls(arr,x+1)==true){
                x=x+1;
                cnt=cnt+1;
            }
            longest=max(cnt,longest);
        }
        cout<<longest;
        return longest;
}
int longestConsecutive2(vector<int>& arr) {
        if(arr.size()==0) return 0;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int lastsmaller=INT_MIN;
        int cnt=0;
        int longest=1;
        for(int i=0;i<n;i++){
            if(arr[i]-1==lastsmaller){
                cnt=cnt+1;
                lastsmaller=arr[i];
            }
            else if(lastsmaller!=arr[i]){
                cnt=1;
                lastsmaller=arr[i];
            }
            longest=max(longest,cnt);
        }
        return longest;
}
int longestConsecutive3(vector<int>& arr) {
        if(arr.size()==0) return 0;
        int n=arr.size();
        int longest=1;
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(arr[i]);
        }
        for(auto it: st){
            if(st.find(it-1)==st.end()){
                int x=it;
                int cnt=1;
                while(st.find(x+1)!=st.end()){
                    cnt++;
                    x++;
                }
                longest=max(longest,cnt);
            }
            
        }
        return longest;
}
int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    vector<int> a;
    for (int i=0;i<n;i++){
        cout<<"enter element no."<<i<<endl;
        int x;
        cin>>x; 
        a.push_back(x);
    }
    longestConsecutive(a);
}