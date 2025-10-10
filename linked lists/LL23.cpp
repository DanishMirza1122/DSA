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

int main(){
    vector<int> arr={2,4,5,7,9};
    vector<int> arr2={1,2,5,6};
    Node* head1=convertarrtodll(arr);
    Node* head2=convertarrtodll(arr2);
    Node* head=mergetwolist(head1,head2);
    print(head);
    return 0;
}