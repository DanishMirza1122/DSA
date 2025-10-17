#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0, high=n-1;
        int ans=n;
        ans=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        return ans;
}
int max1s(vector<vector<int>> matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    int cntmax=0;
    int index=-1;
    for(int i=0;i<n;i++){
        int cntones=m-lowerbound(matrix[i],1);
        if(cntones>cntmax){
            cntmax=cntones;
            index=i;
        }
    }
    return index;
}
int main(){
    int n;
    cout<<"enter rows"<<endl;
    cin>>n;
    int m;
    cout<<"enter columns"<<endl;
    cin>>m;
    vector<vector<int>> nums;
    for(int i=0;i<n;i++){
        vector<int> row;
        for(int j=0;j<m;j++){
            int x;
            cout<<"enter element"<<i<<j<<endl;
            cin>>x;
            row.push_back(x);
        }
        nums.push_back(row);
    }
    cout<<max1s(nums);
}