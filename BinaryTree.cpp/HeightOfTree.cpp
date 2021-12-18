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

int HeightT(Node* root ){
if(root==NULL){
    //return 0 cause int function
    return 0;
}

    int lH= HeightT(root->left);
    int rH= HeightT(root->right);
    return max(lH,rH) +1;
}




int main () {
    //first we created a root pointer which will point to the root of the tree.
    //then root left will point to the new node 2 and right to the new node 3;
    struct Node* root = new Node(1);
    root->left= new Node(2);
    root->right = new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    cout<<HeightT(root)<<" ";

}