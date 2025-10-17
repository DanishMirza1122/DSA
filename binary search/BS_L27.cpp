#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int row=0, col=m-1;
        while(row<n&& col>=0){
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]<target){
                row++;
            }
            else col--;
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