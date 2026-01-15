#include<bits/stdc++.h>
using namespace std;
string removeOuterParentheses(string s) {
        int n=s.size();
        string ans="";
        stack<char> st;
        for(int i=0;i<n;i++){
            if(st.empty()) st.push(s[i]);
            else{
                if(st.top()=='(' &&s[i]=='(') {
                    st.push(s[i]);
                    ans.push_back(s[i]);
                }
                else if(st.size()>1&&st.top()=='(' &&s[i]==')'){
                    st.pop();
                    ans.push_back(s[i]);
                }
                else if(st.size()==1&&st.top()=='(' &&s[i]==')'){
                    st.pop();
                }
            }
        }
        return ans;
}