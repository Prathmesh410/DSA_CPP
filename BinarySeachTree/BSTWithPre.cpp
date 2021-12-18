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
void preorderD(Node* root){
    cout<<root->data<< " ";
    preorderD(root->left);
    preorderD(root->right);
}
Node* BSTPre(int preorder[],int* preorderidx, int key, int min,int max ,int n){
    if(*preorderidx >=n ){
        return NULL;
    }
    Node* root=NULL;
    if(key>min && key<max){
        root= new Node(key);
        *preorderidx+=1;

    if(*preorderidx < n){
        root->left=BSTPre(preorder, preorderidx,preorder[*preorderidx],min,key,n);
    }
    if(*preorderidx < n){
        root->right=BSTPre(preorder,preorderidx,preorder[*preorderidx],key,max,n);
    }

    }
return root;
    
}

int main(){
    int preorder[] = {10,2,1,13,11};
    int n = 5;
    int preorderidx=0;
   Node* root= BSTPre(preorder,&preorderidx,preorder[0],INT_MIN,INT_MAX,n);
   preorderD(root);
   return 0;
}
//not printing the right subtree

