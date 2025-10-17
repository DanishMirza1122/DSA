#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int low=0, high=n*m-1;
        while(low<=high){
            int mid=(low+high)/2;
            int row=mid/m;
            int column=mid%m;
            if(matrix[row][column]==target) return true;
            else if(matrix[row][column]<target) low=mid+1;
            else high=mid-1;
        }
        return false;
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
    int x;
    cout<<"enter target"<<endl;
    cin>>x;
    cout<<searchMatrix(nums,x);
}