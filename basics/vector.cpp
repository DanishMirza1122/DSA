#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,33,4};
    v.push_back(1);
    v.emplace_back(3);
    cout<<v[5];
 
    vector<pair<int,int>>v1;
    v1.push_back({1,2});
    v1.emplace_back(1,2);
    
    vector<int> v2(5,2); //5 times 2//
    vector<int> v3(v2); //copy//

    vector<int>::iterator it=v.begin();

    it++;
    cout<<*(it)<<" ";

    it=it+2;
    cout<< *(it)<<" ";

    vector<int>::iterator it=v.end();

    cout<<v.back()<<" ";
    for (vector<int>:: iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for (auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for (auto it: v){
        cout<< it<<" ";
    }
    //erase function
    v.erase(v.begin()+1, v.begin() +3); //start and end address+1 inside//
    //insert function
    vector<int> v(2,100); //{100,100}
    v.insert(v.begin(),300);//{300,100,100}
    v.insert(v.begin()+1,2,1000);//{300,1000,1000,100,100}


    cout<<v.size();


    v.pop_back();//last elem remove

    vector<int> v2;
    vector<int> v3;
    v2.swap(v3);
    v.clear();
    cout<< v.empty();//true or false
}