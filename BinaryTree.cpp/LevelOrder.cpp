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

void printLevel (Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()){
        Node* node=q.front();
        q.pop();
        if(node != NULL){
            cout<<node->data<<" ";
            if(node->left){
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
            
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
   
    


}

int sumatk(Node* root, int k){
    if(root==NULL){
        return -1;
    }

    int level=0;
    int sum =0;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* node=q.front();
        q.pop();
        // != NULL means for only values
        if(node != NULL){
            if(level==k){
                sum+=node->data;

            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
           q.push(NULL);
           level++; 
        }
    }
    
return sum;

}

// vector<vector<int>>byvector( Node* root){
//     vector<vector<int>> ans;
//     if(root==NULL){
//         return ans;
//     }
//     queue<Node*> q;
//     q.push(root);
//     while (!q.empty())
//     {   vector<int> level;
//         int size = q.size();
//         for(int i=0;i<size;i++)
//     {
//         Node* node=q.front();
//         q.pop();
//         if(node->left){
//             q.push(node->left);
//         }
//         if(node->right){
//             q.push(node->right);
//         }
//         level.push_back(node->data);

//     }
//         ans.push_back(level);
//     }
    
//     return ans;
//     for(auto element:ans){
//         cout<<element;
//     }

   


// }

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
    printLevel(root);
    cout<<sumatk(root,2);

    
}
