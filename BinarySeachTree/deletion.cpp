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



Node* insertBST (Node* root, int val){
    if(root==NULL){
        return new Node(val);
    }

    if(val<root->data){
        root->left=insertBST(root->left,val);
    }
    else{
        root->right=insertBST(root->right,val);
    }
    return root;

}
void inorder(Node* root){
    if(root== NULL){
        return;

    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* inorderSucc(Node* root){
    Node* temp= root;
    while (temp && temp->left != NULL)
    {
        temp=temp->left;
    }
    return temp;
}

Node* deletion(Node* root, int key){
    if(key<root->data){
        root->left=deletion(root->left,key);
    }
    else if(key>root->data){
        root->right=deletion(root->right,key);
    }
    else{
        if(root->left == NULL){
            Node* temp=root->right;
            free(root);
            return temp;
        }
       else if(root->right == NULL){
            Node* temp=root->left;
            free(root);
            return temp;
        }
        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right=deletion(root->right,temp->data);
    }
    return root;
}


Node* deletion2(Node* root, int key){
    if(key<root->data){
        root->left=deletion2(root->left,key);
    }
    else if(key>root->data){
        root->right=deletion2(root->right,key);

    }
    else{
        if(root->left == NULL){
            Node* temp=root->right;
            free(root);
            return temp;
        }
       else if(root->right == NULL){
            Node* temp=root->left;
            free(root);
            return temp;
        }

        Node* temp= inorderSucc(root->right);
        root->data=temp->data;
        root->right=deletion2(root->right,temp->data);

    }
    return root;
}


int main(){
    Node* root= NULL;
    root=insertBST(root,4);
    insertBST(root,3);
    insertBST(root,5);
    insertBST(root,37);
    inorder(root);
    cout<<endl;
    root=deletion2(root,37);
    inorder(root);
  
}
