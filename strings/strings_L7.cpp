#include<bits/stdc++.h>
using namespace std;
string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        vector<pair<int,char>> v;
        for(auto &p: freq){
            v.push_back({p.second,p.first});
        }
        sort(v.begin(), v.end(),greater<>());
        string ans="";
        for(auto &p : v){
            ans.append(p.first,p.second);
        }
        return ans;
}