#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int ele){
        data = ele;
        left = right = nullptr;
    }
};

class BST{
    Node *root;
    public:
    BST(){

    }

    void insert_ele(int ele){}
    bool is_present(int ele){}

    void inorder(Node *root){
        if(root == nullptr) return;

        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }

    void postorder(Node *root){
        if(root == nullptr) return;
        
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }

    void preorder(Node *root){
        if(root == nullptr) return;

        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}