#include <bits/stdc++.h>
using namespace std;

vector<int> PSE(vector<int>& arr){
    int n = (int)arr.size();
    vector<int> nge(n);
    stack<int> st;

    for(int i = 0;i<n;i++){
        while(!st.empty() && st.top() >= arr[i])
            st.pop();

        if(st.empty())
            nge[i] = -1;
        else
            nge[i] = st.top();

        st.push(arr[i]);
    }
    return nge;
}

int main(){
    int n;
    if(!(cin >> n)) return 0;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i) cin >> arr[i];

    vector<int> result = PSE(arr);

    for(int x : result) cout << x << ' ';
    cout << '\n';
    return 0;
}