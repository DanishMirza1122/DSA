#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* convertArr2LL(vector<int> &arr){
    Node* head= new Node(arr[0]);
    Node* mover= head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover-> next= temp;
        mover = temp;

    }
    return head;
}
Node* removehead(Node* head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* removetail(Node* head){
    if (head==NULL || head->next==NULL) return NULL;
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
Node* removekth(Node* head, int k){
    if (head==NULL) return head;
    if (k==1){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
Node* removeel(Node* head, int el){
    if (head==NULL) return head;
    if (head->data==el){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        if(temp->data==el){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
Node* inserthead(Node* head,int val){
    Node* temp= new Node(val,head);
    return temp;
}
Node* insertlast(Node* head, int val){
    if(head==NULL) return new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new Node(val);
    return head;
}
Node* insertkth(Node* head, int k, int val){
    if(k==1){
        Node* temp=new Node(val,head);
        return temp;
    }
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k-1){
            Node* x= new Node(val);
            x->next=temp->next;
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
    
}
Node* insertval(Node* head, int k, int val){
    if(k==head->data){
        Node* temp=new Node(val,head);
        return temp;
    }
    Node* temp=head;

    while(temp->next!=NULL){
        
        if(temp->next->data==k){
            Node* x= new Node(val,temp->next);
            temp->next=x;
            
            break;
        }
        
        temp=temp->next;
    }
    return head;
    
}
int main(){
    vector<int> arr={2,3,4,5,6};
    Node* head= convertArr2LL(arr);
    head=insertval(head,4,100);
    print(head);
}