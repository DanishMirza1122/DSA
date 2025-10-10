#include<bits/stdc++.h>
using namespace std;
void leftrotate(int arr[],int n, int d){
    d=d%n;
    int temp[d];
    for (int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for (int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for (int i=n-d;i<n;i++){
        arr[i]=temp[i-n+d];
    }
}
void leftrotatee(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
void rightrotate(int arr[],int n, int d){
    d=d%n;
    int temp[d];
    for (int i=n-d;i<n;i++){
        temp[i-n+d]=arr[i];
    }
    for (int i=n-d-1;i>=0;i--){
        arr[i+d]=arr[i];
    }
    for (int i=0;i<d;i++){
        arr[i]=temp[i];
    }
}
void rightrotatee(int arr[],int n, int d){
    reverse(arr,arr+n-d);
    reverse(arr+n-d,arr+n);
    reverse(arr,arr+n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) cin>>arr[i];
    /*int temp=arr[0];
    for (int i=1;i<n;i++){
        arr[i-1]=arr[i];

    }
    arr[n-1]=temp;*/
    int d;
    cin>>d;
    rightrotatee(arr,n,d);
        
    for (int i=0;i<n;i++) cout<<arr[i];
}