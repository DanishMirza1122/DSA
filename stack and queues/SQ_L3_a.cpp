#include<bits/stdc++.h>

using namespace std;

int priority(char c){
    if (c=='^') return 3;
    else if(c=='/' || c=='*') return 2;
    else if(c=='+' || c=='-') return 1;
    else return 0;
}
void infixtopostfix(string s){
    stack<char> st;
    string ans;
    for(int i=0;i<s.size();i++){
        char c=s[i];
        if((c>='a' && c<='z')||(c>='0'&&c<='9')||(c>='A'&&c<='Z')){
            ans+=c;
        }
        else if(c=='(') st.push(c);
        else if(c==')'){
            while(st.top()!='('){
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
    cout << "Prefix expression: " << ans << endl;
}
int main() {
  string exp = "(p+q)*(m-n)";
  cout << "Infix expression: " << exp << endl;
  infixtopostfix(exp);
  return 0;
}