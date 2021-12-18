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
void isertAtHead(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
     node* temp=head;

    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void isertAtTail(node* &head,int val){

    if(head==NULL){
        isertAtHead(head,val);
        return;
    }

    node* n= new node(val);
    node* temp=head;

    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    
}


void display(node* &head){
    node* temp =head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while (temp!=head);
    cout<<endl;
   
    
}


//deletion operation
  
void deleteATHead(node* &head){
    node* temp=head;

    while (temp->next!=head)
    {
        temp=temp->next;
    }
    node* todelete=head;
    temp->next=head->next;
    head=head->next;
    delete todelete;


}

void deletion(node* &head,int pos){
    if(pos==1){
        deleteATHead(head);
        return;
    }
    node* temp=head;
    int count =1;
    while (count!=pos-1){
        temp=temp->next;
        count++;
    }
    node* todelete = temp->next;
    temp->next=temp->next->next;
    delete todelete;

    
}  

int main(){
    node* head=NULL;
    isertAtTail(head,1);
    isertAtTail(head,2);
    isertAtTail(head,3);
    isertAtTail(head,4);
    display(head);
    isertAtHead(head,5);
    display(head);
    deletion(head,3);
    display(head);
    
}