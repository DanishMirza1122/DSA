#include<bits/stdc++.h>

using namespace std;

int priority(char c){
    if (c=='^') return 3;
    else if(c=='/' || c=='*') return 2;
    else if(c=='+' || c=='-') return 1;
    else return 0;
}
string rev(string str){
    string result="";
    for (int i = str.length() - 1; i >= 0; i--) {
        char ch = str[i];
        if (ch == '(')
            result += ')';
        else if (ch == ')')
            result += '(';
        else
            result += ch;
    }
    return result;
}
void infixtoprefix(string s){
    rev(s);
    stack<char> st;
    string ans;
    for(int i=0;i<s.size();i++){
        char c=s[i];
        if((c>='a' && c<='z')||(c>='0'&&c<='9')||(c>='A'&&c<='Z')){
            ans+=c;
        }
        else if(c=='(') st.push(c);
        else if(c==')'){
            while(!st.empty() &&st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            if(c=='^'){
                while(!st.empty() && priority(c)<=priority(st.top())){
                ans+=st.top();
                st.pop();
                }
            }
            else{
                while(!st.empty() && priority(c)< priority(st.top())){
                ans+=st.top();
                st.pop();
                }
            }
            st.push(c);   
        }
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    ans=rev(ans);
    cout << "Prefix expression: " << ans << endl;
}
int main() {
  string exp = "F+D-C*(B+A)";
  cout << "Infix expression: " << exp << endl;
  infixtoprefix(exp);
  return 0;
}