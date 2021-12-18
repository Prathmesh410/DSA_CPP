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

struct info{
    int size;
    int min;
    int max;
    int ans;
    bool isBST;

};

info largestBSTinBT(Node* root){
    if(root== NULL){
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left ==NULL && root->right == NULL){
        return {1,root->data,root->data,1,true};
    }

    info leftInfo = largestBSTinBT(root->left);
    info rightInfo = largestBSTinBT(root->right);

    info curr;
    curr.size=(1+leftInfo.size+rightInfo.size);

    if(leftInfo.isBST && rightInfo.isBST && leftInfo.max<root->data && rightInfo.min>root->data){
        curr.min = min(leftInfo.min,min(rightInfo.min,root->data));
        curr.max = max(leftInfo.max,max(rightInfo.max,root->data));
        curr.ans = curr.size;
        curr.isBST = true;
        return curr;
    }
   
     
    //here wee have to only change the curr.ans and isBst value.min and max value are borrowed from from upper if;
        curr.ans = leftInfo.ans+rightInfo.ans;
        curr.isBST= false;
        return curr;
    
}

int main(){
    Node* root = new Node(15);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(5);

    cout<<"Larget bst : "<<largestBSTinBT(root).ans<<endl;
    return 0;

}
  