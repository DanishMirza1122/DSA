#include<bits/stdc++.h>
using namespace std;
bool rotateString(string s, string goal) {
        int n=s.size();
        if(goal.size()!=n) return false;
        for(int i=0;i<n;i++){
            if(s.substr(i)+s.substr(0,i)==goal) return true;
        }
        return false;
}
bool rotateString(string s, string goal) {
        int n=s.size();
        if(goal.size()!=n) return false;
        string res=s+s;
        return res.find(goal)!=string::npos;//no position found
}