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

int clacHeight(Node* root){
    if(root== NULL){
        return 0;

    }
    return max(clacHeight(root->left),clacHeight(root->right)) +1;
}

int clacDia(Node* root){
    if(root==NULL){
        return 0;
    }
//h
    int lHeight= clacHeight(root->left);
    int rHeight = clacHeight(root->right);

    int currDiameter=lHeight+rHeight+1; 

    int lDiameter=clacDia(root->left);
    int rDiameter=clacDia(root->right);

    return max(currDiameter,max(lDiameter,rDiameter));
}

int cladia2(Node* root,int* height){
    if(root==NULL)

{
    *height=0;
    return 0;
}   
 int lh=0,rh=0;
 int lDiameter=cladia2(root->left,&lh);
 int rDiameter=cladia2(root->right,&rh);

 int currDia = lh+ rh+ 1;
 *height = max(lh,rh)+1;

 return max(currDia,max(lDiameter,rDiameter));

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

    cout<<clacDia(root)<<" ";
    int h=0;
    cout<<cladia2(root,&h)<<" ";

}
