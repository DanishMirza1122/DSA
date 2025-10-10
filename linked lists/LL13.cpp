#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    

    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertarrtodll(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev= head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i],prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
//tortoise and hare method

Node* middle(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head1=convertarrtodll(arr);
    Node* head=(head1);
    print(head);
    return 0;
}