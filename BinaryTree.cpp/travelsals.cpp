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

void postorder(struct Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

vector<int> preO(Node* root){
    vector<int>pre;
    if(root==NULL){
        return pre;
    }
    stack<Node*> st;
    st.push(root);
    while (!st.empty())
    {
        Node* node=st.top();
        st.pop();
        pre.push_back(node->data); 
        if(node->right){
            st.push(node->right);
        }
        if(node->left){
            st.push(node->left);
        }
    }
    
    for(int i=0;i<pre.size();i++){
        cout<<pre[i]<<" ";
    }
    return pre;
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
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    preO(root);
    return 0;

}
