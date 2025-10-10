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
Node* deletehead(Node*head){
    if(head==NULL || head->next==NULL) return NULL;
    Node* prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;
}
Node* deletetail(Node*head){
    if(head==NULL || head->next==NULL) return NULL;
    Node* tail=head;
    while (tail->next!=NULL)
    {   
        tail=tail->next;
        
    }
    Node* newtail=tail->back;
    newtail->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;
}
Node* deletekth(Node* head, int k){
    if(head==NULL) return NULL;
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* front=temp->next;
    if(prev==NULL && front==NULL) {
        delete temp;
        return NULL;
    }
    else if(prev==NULL){
        return deletehead(head);
    }
    else if(front==NULL){
        return deletetail(head);
    }
    else{
        
        prev->next=front;
        front->back=prev;
        temp->back=nullptr;
        temp->next=nullptr;
        delete temp;
    }
    return head;
}
void deletegivennode(Node* temp){ //cant give head
    Node* prev=temp->back;
    Node* front=temp->next;
    if(front==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
        free (temp);
        return;
    }
    
        
    prev->next=front;
    front->back=prev;
    temp->back=nullptr;
    temp->next=nullptr;
    delete temp;
}
void insertbeforenode(Node* node, int val){
    Node* prev=node->back;
    Node* newNode= new Node(val,node,prev);
    prev->next=newNode;
    node->back=newNode;
}
int main(){
    vector<int> arr={12,5,8,7,9};
    Node* head=convertarrtodll(arr);
    insertbeforenode(head->next->next,10);
    print(head);
    return 0;
} 