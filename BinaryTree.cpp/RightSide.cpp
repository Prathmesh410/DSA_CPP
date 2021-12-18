#include "bits/stdc++.h"

using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void rightview(Node* root){
    if(root==NULL){
        return;
    }

    queue<Node*>q;
    q.push(root);

    while (!q.empty())
    {
        int n=q.size();
        
        for(int i=0;i<n;i++){
            Node* curr=q.front();
            q.pop();
            if(i==n-1){
                //here we are checking that if the no present in q is last then it the right most root.
                cout<<curr->data<<" ";
            }
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }

        }
    }
    


}
void leftview(Node* root){
    if(root==NULL){
        return;
    }

    queue<Node*>q;
    q.push(root);

    while (!q.empty())
    {
        int n=q.size();
        
        for(int i=0;i<n;i++){
            Node* curr=q.front();
            q.pop();
            if(i==0){
                //here we are checking that if the no present in q is last then it the right most root.
                cout<<curr->data<<" ";
            }
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }

        }
    }
    


}



int main ( ) {
    //first we created a root pointer which will point to the root of the tree.
    //then root left will point to the new node 2 and right to the new node 3;
    struct Node* root = new Node(1);
    root->left= new Node(2);
    root->right = new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    rightview(root);
    leftview(root);
    return 0;
}