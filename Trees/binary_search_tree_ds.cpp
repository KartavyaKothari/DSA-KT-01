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

    void inorder_traverse(Node *root){
        if(root == nullptr) return;

        inorder_traverse(root->left);
        cout<<root->data<<" ";
        inorder_traverse(root->right);
    }
    
    void postorder_traverse(Node *root){
        if(root == nullptr) return;
        
        postorder_traverse(root->left);
        postorder_traverse(root->right);
        cout<<root->data<<" ";
    }

    void preorder_traverse(Node *root){
        if(root == nullptr) return;

        cout<<root->data<<" ";
        preorder_traverse(root->left);
        preorder_traverse(root->right);
    }

    // Insersion rec method 1
    // void insert_ele(Node *root,int ele){
    //     if(root == nullptr){
    //         root = new Node(ele);
    //         return;
    //     }

    //     if(ele <= root->data){
    //         if(root->left == nullptr){
    //             root->left = new Node(ele);
    //         }else insert_ele(root->left,ele);
    //     }else{
    //         if(root->right == nullptr){
    //             root->right = new Node(ele);
    //         }else insert_ele(root->right,ele);
    //     }
    // }

    // Insertion rec method 2
    Node* insert_ele(Node *root, int ele){
        if(root == nullptr){
            return new Node(ele);
        }

        if(ele <= root->data){
            root->left = insert_ele(root->left,ele);
        }else root->right = insert_ele(root->right,ele);

        return root;
    }

    public:
    BST(){
        root = nullptr;
    }

    // Recursive insert M1
    // void insert(int ele){
    //     insert_ele(root,ele);
    // }

    // Recursive insert M2
    void insert(int ele){
        root = insert_ele(root,ele);
    }

    // Iterative code for inserting
    // void insert_ele(int ele){
    //     Node *n = new Node(ele);
    //     Node *p = root;

    //     if(p==nullptr){
    //         root = n;
    //         return;
    //     }

    //     while(p!=nullptr){
    //         if(ele <= p->data){
    //             if(p->left == nullptr){
    //                 p->left = n;
    //                 return;
    //             }
    //             p = p->left;
    //         }else{
    //             if(p->right == nullptr){
    //                 p->right = n;
    //                 return;
    //             }
    //             p = p->right;
    //         }
    //     }
    // }

    bool is_present(int ele){}

    void inorder(){
        if(root==nullptr){
            cout<<"Tree empty"<<endl;
            return;
        }
        cout<<"Inorder: ";
        inorder_traverse(root);
        cout<<endl;
    }

    void preorder(){
        if(root==nullptr){
            cout<<"Tree empty"<<endl;
            return;
        }
        cout<<"Preorder: ";
        preorder_traverse(root);
        cout<<endl;
    }

    void postorder(){
        if(root==nullptr){
            cout<<"Tree empty"<<endl;
            return;
        }
        cout<<"Postorder: ";
        postorder_traverse(root);
        cout<<endl;
    }
};

int main(){
    BST tree;
    vector<int> arr = {56,33,24,56,98,11,45,69,6,23,45,77,43};

    for(int ele : arr){
        tree.insert_ele(ele);
    }

    tree.inorder();
    tree.preorder();
    tree.postorder();

    return 0;
}