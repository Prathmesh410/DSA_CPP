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
int maxPathSumUntil(Node* root , int &ans){
    if(root==NULL){
        return 0;
    }
    int le = maxPathSumUntil(root->left,ans);
    int ri = maxPathSumUntil(root->right,ans);
    //this is the main ans 
    int NodeMax = max(max(root->data,root->data+le+ri),max(root->data + le,root->data + ri));
   
    ans = max(ans,NodeMax);
    
    //but if we want to go up int the root ,we have to return the sum of root data,left and right to the upper nodes
    int singlePath=max(root->data,max(root->data+ le,root->data +ri));
    return singlePath;
}

int maxPathSum(Node* root){
    int ans = INT_MIN;
    maxPathSumUntil(root,ans);
    return ans;
}

int main () {
    
    struct Node* root = new Node(1);
    root->left= new Node(2);
    root->right = new Node(3);
    root->right->right = new Node(4);
    root->left->left = new Node(5);
    

    cout<<maxPathSum(root);
   return 0;

}