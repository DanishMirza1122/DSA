#include<bits/stdc++.h>
using namespace std;
vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> v;
        stack<int> st;
        int n=asteroids.size();
        for(int i=0;i<n;i++){
            if(asteroids[i]<0){
                if(!st.empty() && abs(asteroids[i])>st.top()){
                    while(!st.empty() && st.top()>0 && abs(asteroids[i])>=st.top()){
                        st.pop();
                    }
                    if(!st.empty() &&st.top()>0) continue;
                }
                else if(!st.empty() && abs(asteroids[i])==st.top()){
                    st.pop();
                    continue;
                }
                else if(!st.empty() && abs(asteroids[i])<st.top()) continue;
            }
            st.push(asteroids[i]);
        }
        while (!st.empty()) {
        v.push_back(st.top());
        st.pop();
        }
        reverse(v.begin(), v.end());
        return v;
}