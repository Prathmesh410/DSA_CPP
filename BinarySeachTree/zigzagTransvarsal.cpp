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

void zigzag(Node* root){
    if(root==NULL){
        return ;
    }
    stack<Node*> currlev;
    stack<Node*> nextlev;

    bool leftToRight=true;

    currlev.push(root);

    while (!currlev.empty())
    {
        Node* temp=currlev.top();
        currlev.pop();

        if(temp){
            cout<<temp->data<<" ";

            if(leftToRight){
                if(temp->left){
                    nextlev.push(temp->left);
                }
                if(temp->right){
                    nextlev.push(temp->right);
                }
            }
            else{
                if(temp->right){
                    nextlev.push(temp->right);
                }
                if(temp->left){
                    nextlev.push(temp->left);
                }
            }

        }

        if(currlev.empty()){
            leftToRight = !leftToRight;
            swap(currlev,nextlev);
        }


    }
    

}


// void zigzag2(Node* root){
//     stack<Node*> currlev;
//     stack<Node*> nextlev;

//     bool leftToright=true;

//     currlev.push(root);

//     while (!currlev.empty())
//     {
//         Node* temp=currlev.top();
//         currlev.pop();
//         if(temp){
//             cout<<temp->data<<" ";

//             if(leftToright){
//                 if(temp->left){
//                     nextlev.push(temp->left);
//                 }
//                 if(temp->right){
//                     nextlev.push(temp->right);
//                 }
//             }
//             else{
//                 if(temp->right){
//                     nextlev.push(temp->right);

//                 }
//                 if(temp->left){
//                     nextlev.push(temp->left);
//                 }
//             }
//         }
//         if(currlev.empty()){
//             leftToright = !leftToright;
//             swap(currlev,nextlev);
//         }
//     }
    

// }


int main(){
    Node* root= new Node(12);
    root->left=new Node(9);
    root->right=new Node(15);
    root->left->left=new Node(5);
    root->left->right= new Node(10);

    zigzag(root);
    cout<<endl;
}