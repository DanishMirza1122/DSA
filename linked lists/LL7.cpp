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
Node* sortlist(Node* head){
    if(!head || !head->next) return head;
    Node* zerohead = new Node(-1);
    Node* onehead = new Node(-1);
    Node* twohead = new Node(-1);
    Node* temp;
    Node* zero=zerohead;
    Node* one=onehead;
    Node* two=twohead;

    while(temp){
        if(temp->data==0){
            zero->next=temp;
            zero=zero->next;
        }
        else if(temp->data==1){
            one->next=temp;
            one=one->next;

        }
        else{
            two->next=temp;
            two=two->next;
        }
        temp=temp->next;
    }
    zero->next=(onehead->next)?(onehead->next):(twohead->next);
    one->next=twohead->next;
    two->next=NULL;
    Node* newhead=zerohead->next;
    delete zerohead;
    delete onehead;
    delete twohead;
    return newhead;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head1=convertarrtodll(arr);
    Node* head=sortlist(head1);
    print(head);
    return 0;
}