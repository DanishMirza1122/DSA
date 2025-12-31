#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
        map<char,int> mpp;
        int l=0, r=0;
        int n=s.size();
        int maxlen=0;
        while(r<n){
            if(mpp.find(s[r])!=mpp.end()){
                if(mpp[s[r]]>=l) l=mpp[s[r]]+1;
            } 
            mpp[s[r]]=r;
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
}