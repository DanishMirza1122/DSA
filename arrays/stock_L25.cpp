#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
    int profit1 =0;
    int mini=prices[0];
    for(int i=1;i<prices.size();i++){
        int cost=prices[i]-mini;
        profit1=max(profit1,cost);
        if(profit1<0) profit1=0;
        mini=min(prices[i],mini);
    }
    return profit1;
}
int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    vector<int> prices;
    for (int i=0;i<n;i++){
        cout<<"enter element no."<<i<<endl;
        int x;
        cin>>x; 
        prices.push_back(x);
    }
    cout<<maxProfit(prices);
    
}