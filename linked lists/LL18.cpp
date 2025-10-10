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
Node* deleteoccurrence(Node* head, int k){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==k){
            if(temp==head){
                head=head->next;
            }
            Node* nextnode=temp->next;
            Node* prevnode=temp->back;
            if(nextnode) nextnode->back=prevnode;
            if(prevnode) prevnode->next=nextnode;
            free(temp);
            temp=nextnode;
        }
        else{
            temp=temp->next;
        }
    }
    return head;
}
int main(){
    vector<int> arr={12,5,8,78,6,6,8,0,1,2,8,8,9};
    Node* head=convertarrtodll(arr);
    head=deleteoccurrence(head,8);
    print(head);
    return 0;
}