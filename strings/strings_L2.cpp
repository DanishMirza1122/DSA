#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
    int n=s.size();
        int l=n-1,r=n-1;
        string ans="";
        while(l>=0){
            while(l>=0 &&s[l]==' ') l--;
            if(l<0) break;
            r=l;
            while(l>=0 &&s[l]!=' ') l--;
            if(!ans.empty()) ans.push_back(' ');
            ans.append(s.substr(l+1,r-l));
        }
        return ans;
}