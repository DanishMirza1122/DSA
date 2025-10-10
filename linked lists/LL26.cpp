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
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
Node* mergetwolist(Node* list1, Node* list2){
    Node* dummyNode=new Node(-1);
    Node* temp=dummyNode;
    while(list1!=NULL&&list2!=NULL){
        if(list1->data<list2->data){
            temp->next=list1;
            temp=list1;
            list1=list1->next;
        }
        else{
            temp->next=list2;
            temp=list2;
            list2=list2->next;
        }

    }
    if(list1) temp->next=list1;
    else temp->next=list2;
    return dummyNode->next;
}
Node* findmiddle(Node* head){
    Node* slow=head;
    Node* fast=head->next;//for middle to be m1
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
Node* sortll(Node* head){
    if(head==NULL||head->next==NULL) return head;
    Node* middle=findmiddle(head);
    Node*right=middle->next;
    middle->next=nullptr;
    Node* left=head;
    left=sortll(left);
    right=sortll(right);
    return mergetwolist(left,right);
}

int main(){
    vector<int> arr={2,5,3,8,1,3,6,4,9};
    Node* head1=convertarrtodll(arr);
    Node* head=sortll(head1);
    print(head);
    return 0;
}