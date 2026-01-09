#include<bits/stdc++.h>
using namespace std;
int maxlength(string s, int k){
    map<int, int> mpp;
    int l=0, r=0, maxlen=0;
    while(r<s.size()){
        mpp[s[r]]++;
        if(mpp.size()>k){
            mpp[s[l]]--;
            if(mpp[s[l]]==0) mpp.erase(s[l]);
            l++;
        }
        if(mpp.size()<=k) maxlen=max(maxlen, r-l+1);
        r++;
    }
    return maxlen;
}
int main(){
    string s;
    cin>>s;
    cout<<maxlength(s, 2);
}