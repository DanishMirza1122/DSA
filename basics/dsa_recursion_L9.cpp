#include<bits/stdc++.h>
using namespace std;
int cnt=0;
/*void printname(int n,string name){
    if (cnt==n){
        return;
    }
    cnt++;
    cout<<name<<endl;
    printname(n,name);
}
int main(){
    int n;
    string name;
    cin>>n>>name;
    printname(n,name);
}
void linearnum(int n){
    cnt++;
    if (cnt>n){
        return;

    }
    cout<<cnt<<endl;
    linearnum(n);
}
int main(){
    int n;
    cin>>n;
    linearnum(n);
}
void reverselinearnum(int n){
    cnt++;
    if (cnt>n){
        return;

    }
    cout<<n-cnt+1<<endl;
    reverselinearnum(n);
}
int main(){
    int n;
    cin>>n;
    reverselinearnum(n);
}*/
void backtrackrev(int i,int n){
    if (i>n) return ;
    backtrackrev(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    backtrackrev(1,n);
}
