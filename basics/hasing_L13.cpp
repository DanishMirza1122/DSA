#include<bits/stdc++.h>
using namespace std;
/*
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hashh[13]={0};
    for (int i=0;i<n;i++){
        hashh[arr[i]]+=1;
    }
    
    int q;
    cin>>q;
    
    while(q--){
        int number;
        cin>>number;
        cout<<hashh[number]<<endl;
    }
    
}



int main(){
    string s;
    cin>>s;
    int n=size(s);


    int hashh[26]={0};
    for (int i=0;i<n;i++){
        hashh[s[i]-'a']+=1;
    }
    
    int q;
    cin>>q;
    
    while(q--){
        char ch;
        cin>>ch;
        cout<<hashh[ch-'a']<<endl;
    }
    
}*/

int main(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    int q;
    cin>>q;
    
    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }
    
}
