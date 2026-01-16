#include<bits/stdc++.h>
using namespace std;
string largestOddNumber(string num) {
        int n=num.size();
        int maxn=0;
        int l=0,r=n-1;
        while(r>=0){
            if((num[r]-'0')%2!=0) return num.substr(l,r+1);
            r--;
        } 
        return "";  
}