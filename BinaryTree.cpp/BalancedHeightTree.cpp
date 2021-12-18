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

int height(Node* root){
    if(root==NULL){
        return 0;
    }
   int lh=height(root->left);
    int rh=height(root->right);

    return max(lh,rh)+1;


}

bool isBalacned (Node* root){
    if(root==NULL){
        return true;
    }


    if(isBalacned(root->left)== false){
        return false;
    }
    if(isBalacned(root->right)== false){
        return false;
    }
   int lh=height(root->left);
   int rh=height(root->right); 

    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }

}



bool isBalacned2 (Node* root,int* height){
    if(root==NULL){
        return true;
    }
    int lh=0, rh=0;

    if(isBalacned2(root->left, &lh)== false){
        return false;
    }
    if(isBalacned2(root->right, &rh)== false){
        return false;
    }
  *height=max(rh,lh)+1;

    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
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
    root->right->right->left= new Node(8);
    root->right->right->left->left= new Node(9);
    
    if(isBalacned(root)){
        cout<<"tree is balanced";
    }
    else{
        cout<<"tree is unbalnced";
    }
    
    int h=0;
    if(isBalacned2(root,&h)){
        cout<<"tree is balanced";
    }
    else{
        cout<<"tree is Unbalanced";
    }
    return 0;


}
