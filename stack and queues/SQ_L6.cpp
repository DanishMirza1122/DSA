#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        deque<int> ans;
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n]){
                st.pop();
            }
            if(i<n){
                if(st.empty()) ans.push_front(-1);
                else ans.push_front(st.top());
            }
            st.push(nums[i%n]);
        }
        return vector<int>(ans.begin(), ans.end());
}