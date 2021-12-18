
// #include "bits/stdc++.h"

// using namespace std;
// struct Node{
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;

//     }
// };

// Node* isertBST(Node* root, int val){
//     if(root== NULL){
//         return new Node(val); 
//     }
//     if(val< root->data){
//         root->left=isertBST(root->left,val);
//     }
//     else{
//         root->right=isertBST(root->right,val);
//     }
//     return root;

// }

// //searching in bst
// Node* searchInBst(Node* root, int val){
//     if(root == NULL){
//         return NULL;
//     }
//     if(root->data == val){
//         return root;
//     }
//     if(root->data>val){
//         return searchInBst(root->left,val);
//     }
//     return searchInBst(root->right,val);
// }

// void inorder(Node* root){
//     if(root==NULL){
//         return;

//     }
//     inorder(root->left);
//     cout<<root->data<< " ";
//     inorder(root->right);
// }

// int main(){  
//     Node* root=NULL;
//     root=isertBST(root,5);
//     isertBST(root,1);
//     isertBST(root,3);
//     isertBST(root,2);
//     isertBST(root,4);
//     isertBST(root,7);
//     inorder(root);
//     if(searchInBst(root,8)==NULL){
//         cout<<"NO ele";
//     }
//     else{
//         cout<<"ele ele";
//     }
//     return 0;
// }

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

Node* serchBST(Node* root,int val){
    if(root==NULL){
        return NULL;
    }
    if(root->data==val){
        return root;
    }
    if(root->data>val){
        return serchBST(root->left,val);
    }
    return serchBST(root->right,val);
}



int main(){
    Node* root= NULL;
    root=insertBST(root,4);
    insertBST(root,3);
    insertBST(root,5);
    insertBST(root,37);
    inorder(root);
    
    if(serchBST(root,9)==NULL){
        cout<<"Nothing";
    }
    else{
        cout<<" there is something";
    }
}
