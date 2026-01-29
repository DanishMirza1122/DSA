#include<bits/stdc++.h>
using namespace std;
int myAtoi(string s) {
        long ans=0;
        int n=s.size();
        int i=0, sign=1;
        while(s[i]==' ') i++;
        if(i==n) return 0;
        if(s[i]=='-') {
            i++;
            sign=-1;
        }
        else if(s[i]=='+') i++;
        while(i<n && isdigit(s[i])){
            ans=ans*10+(s[i]-'0');
            if(ans*sign>INT_MAX) return INT_MAX;
            else if(ans*sign<INT_MIN) return INT_MIN;
            i++;
        }
        return ans*sign;
    }