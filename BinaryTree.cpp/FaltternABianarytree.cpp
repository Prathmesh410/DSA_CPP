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

void flattern(Node* root ){
    if(root == NULL ||(root->left == NULL && root->right ==NULL)) {
        return;
    }

    if(root->left != NULL){
        flattern(root->left);
        Node* temp=root->right;
        root->right=root->left;
        root->left=NULL;
        //we are taking right here caz we changed the left and right subtrees;
        Node* t=root->right;
        while (t->right != NULL)
        {
            t=t->right;
        }
        t->right=temp;

        

    }
    flattern(root->right);

}

// extra code for just testing'

void preorder (struct Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
void inorder(struct Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}



int main () {
    
    struct Node* root = new Node(1);
    root->left= new Node(2);
    root->right = new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);

    preorder(root);
    cout<< " "<<endl;
    inorder(root);
    cout<< " "<<endl;
    flattern(root);
     preorder(root);
    cout<< " "<<endl;
    inorder(root);
    cout<< " "<<endl;

    return 0;
}