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

bool getpath(Node* root, int key,vector<int> &path){
    if(root=NULL){
        return false;
    }

    path.push_back(root->data);
    if(root->data== key){
        return true;
    }
    if(getpath(root->left,key,path) || getpath(root->right,key,path)){
        return true;
    }

    path.pop_back();
    return false;


}

int LCA (Node* root, int n1,int n2){
    vector<int>path1,path2;

    if(!getpath(root,n1,path1) || !getpath(root,n2,path2)){
        return -1;
    }

    int pc;
    for(pc=0;pc<path1.size() && path2.size();pc++){
        if(path1[pc]!=path2[pc]){
            break;
        }
    }
    return path1[pc-1];
}


Node* LCA2(Node* root ,int n1,int n2){
    if(root ==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    Node* lcal=LCA2(root->left,n1,n2);
    Node* lcar=LCA2(root->right,n1,n2);
    
    if(lcal && lcar){
        return root;
    }
    if(lcal !=NULL){
        return lcal;
    }
    return lcar;
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
    int n1 =6,n2=7;
    Node* lca = LCA2(root,n1,n2);
    cout<<lca->data;
    
    return 0;
}