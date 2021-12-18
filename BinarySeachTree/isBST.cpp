#include "bits/stdc++.h"

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

Node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};

bool isBST(Node* root,Node* min=NULL,Node* max=NULL){
    if(root==NULL){
        return true;
    }
    if(min != NULL && root->data <=min->data){
        return false;
    }
    if(max != NULL && root->data >= max->data){
        return false;
    }   
    bool left=isBST(root->left,min,root);
    bool right=isBST(root->right,root,max);

    return left and right;
}




int main(){
    Node* root= new Node(4);
    root->left=new Node(2);
    root->right = new Node(7);
    root->right->left = new Node(3);
    root->right->right = new Node(8);
    root->left->left = new Node(1);
    cout<<isBST(root,NULL,NULL);
}



















