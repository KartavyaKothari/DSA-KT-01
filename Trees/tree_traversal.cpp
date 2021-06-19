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

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(11);

    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->left->left = new Node(10);

    root->right->right = new Node(5);
    root->right->right->left = new Node(6);
    root->right->right->left->left = new Node(8);
    root->right->right->left->right = new Node(9);

    root->right->right->right = new Node(7);

    cout<<"Preorder: ";
    preorder(root);
    cout<<endl;

    cout<<"Inorder: ";
    inorder(root);
    cout<<endl;

    cout<<"Postorder: ";
    postorder(root);
    cout<<endl;

    return 0;
}