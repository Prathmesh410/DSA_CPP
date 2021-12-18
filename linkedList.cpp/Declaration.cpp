#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;

    }
};
void InsertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;

};

void InsertAtTail(node* &head,int val){
    node* n= new node(val);
if(head==NULL){
    head=n;
    return;
}
node* temp =head;
while (temp->next!=NULL){
    temp=temp->next;
}
temp->next=n;

};
//display function


void display (node* head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
};

//seraching
bool search (node* &head,int key)
{
   node* temp=head;
    while (temp!=NULL)
    {
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    } 
        return false;
};
// deletion of linked list
void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;

    delete todelete;
}

void deletion (node* head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    while (temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

//reverse
//by itretor

node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
while (currptr!=NULL)
{
    nextptr=currptr->next;
    currptr->next=prevptr;
//increments
    prevptr=currptr;
    currptr=nextptr;
}
    return prevptr;
}

//recursiv way

node* reverseRecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}




//reverse k nodes
node* reversekNodes(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;

    while (currptr!=NULL && count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;

    }
    if(nextptr!=NULL){
    head->next=reversekNodes(nextptr,k);
    }
    return prevptr;

}
int main(){

    node* head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    // InsertAtHead(head,0);
    display(head);
    // cout<<search(head,3)<<endl;
    // deletion(head,2);
    // display(head);
    // deleteAtHead(head);
    //  display(head);
    //  node* neww=reverse(head);
    //  display(neww);
    //  node* neww2=reverseRecursive(head);
    //  display(neww2);
    int k=2;
    node* newwh=reversekNodes(head,k);
    display(newwh);
    return 0;
}