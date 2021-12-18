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



Node* LCA(Node* root ,int n1,int n2){
    if(root ==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    Node* lcal=LCA(root->left,n1,n2);
    Node* lcar=LCA(root->right,n1,n2);
    
    if(lcal && lcar){
        return root;
    }
    if(lcal ==NULL || lcar== NULL){
        return NULL;
    }
    if(lcal !=NULL){
        return lcal;
    }
    return lcar;
}

int findd(Node* root,int k,int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return dist;
    }
    int left=findd(root->left,k,dist+1);
    if(left != -1){
        return left;
    }
    return findd(root->right,k,dist+1);

}

int distBetNodes(Node* root,int n1,int n2){
    Node*lca= LCA(root,n1,n2);
    int d1 =findd(lca,n1,0);
    int d2 =findd(lca,n2,0);

    return(d1+d2);
}
int main ( ) {
    
    struct Node* root = new Node(1);
    root->left= new Node(2);
    root->right = new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    cout<<distBetNodes(root,2,3)<<endl;
    return 0;
}



// #include "bits/stdc++.h"

// using namespace std;

// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// Node* LCA(Node* root,int n1,int n2){

//     if(root==NULL){
//         return NULL;
//     }
//     if(root->data==n1 || root->data == n2){
//         return root;
//     }
//     Node* lcal = LCA(root->left,n1,n2);
//     Node* lcar = LCA(root->right,n1,n2);

//     if(lcal !=NULL&& lcar !=NULL){
//         return root;
//     }
//     if(lcal == NULL || lcar == NULL){
//         return NULL;
//     }

//     if(lcal != NULL){
//         return lcal;
//     }
//     return lcar;
// }

// int findd(Node* root,int k,int dist){
//     if(root=NULL){
//         return -1;
//     }
//     if(root->data==k){
//         return dist;
//     }
//     int left=findd(root->left,k,dist+1);
//     if(left != -1){
//         return left;

//     }
//     return findd(root->right,k,dist+1);
// }

// int distance1(Node* root,int n1,int n2){
//     Node* lca=LCA(root,n1,n2);
//     int d1= findd(root,n1,0);
//     int d2= findd(root,n2,0);

//     return (d1+d2);


// }

// int main ( ) {
//     //first we created a root pointer which will point to the root of the tree.
//     //then root left will point to the new node 2 and right to the new node 3;
//     struct Node* root = new Node(1);
//     root->left= new Node(2);
//     root->right = new Node(3);
//     root->left->left= new Node(4);
//     root->left->right= new Node(5);
//     root->right->left= new Node(6);
//     root->right->right= new Node(7);
//     int n1 =6,n2=7;
//     cout<<distance1(root,2,3);
    
//     return 0;
// }
