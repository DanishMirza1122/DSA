#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(strs.empty()) return "";
        string ans="";
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[n-1];
        int mini=min(first.size(),last.size());
        for(int i=0;i<mini;i++){
            if(first[i]!=last[i]) break;
            ans+=first[i];
        }
        return ans;
}