#include<bits/stdc++.h>
using namespace std;
int maxDepth(string s) {
        int maxdepth=0;
        int cnt=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(') cnt++;
            else if(s[i]==')') cnt--;
            maxdepth=max(cnt,maxdepth);
        }
        return maxdepth;
}