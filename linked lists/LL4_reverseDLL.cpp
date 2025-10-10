#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    public:
    Node(int data1){
        data=data1;
        back=nullptr;
        next=nullptr;
    }
};
Node* convertarrtodll(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev= head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i],nullptr,prev);
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
Node* reverseDLL(Node* head){
    Node* crnt=head;
    Node* last =NULL;
    if(head==NULL || head->next==NULL) return head;
    while(crnt!=NULL){
        last=crnt->back;
        crnt->back=crnt->next;
        crnt->next=last;
        crnt=crnt->back;
       
    }
    return last->back;
}
int main(){
    vector<int> arr={12,5,8,7,9};
    Node* head=convertarrtodll(arr);
    head=reverseDLL(head);
    print(head);
    return 0;
}