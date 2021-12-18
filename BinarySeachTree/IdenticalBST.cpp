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

bool identicalBST(Node* root1,Node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    if(root1!=NULL && root2!=NULL){
        if(root1->data==root2->data){
            bool left = identicalBST(root1->left,root2->left);
            bool right = identicalBST(root1->right,root2->right);
            return left and right;
        }
        else{
            return false;

        }
    }
}

int main(){
     Node* root1= new Node(12);
    root1->left=new Node(9);
    root1->right=new Node(15);
    root1->left->left=new Node(5);
    root1->left->right= new Node(10);

     Node* root2= new Node(12);
    root2->left=new Node(9);
    root2->right=new Node(15);
    root2->left->left=new Node(5);
    root2->left->right= new Node(10);

    if(identicalBST(root1,root2)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}