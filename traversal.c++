#include <iostream>
using namespace std;

struct Node {
    int value;
    Node*left;
    Node*right;

    Node(int val){
        value = val;
        Node*left = NULL;
        Node* right = NULL;
    }
};

void inordertraversal(Node* node){
    if(node == NULL){
        return;
    }
    inordertraversal(node->left);
    cout<<node->value<<" ";
    inordertraversal(node->right);
}

void preordertraversal(Node* node){
    if(node == NULL){
        return;
    }
    cout<<node->value<<" ";
    preordertraversal(node->left);
    preordertraversal(node->right);
}


void postordertraversal(Node* node){
    if(node == NULL){
        return;
    }
    postordertraversal(node->left);
    postordertraversal(node->right);
    cout<<node->value<<" ";
}

main(){
    Node*root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right =new Node(5);
    root->right->left = new Node(6);
    root->right->right =new Node(7);

    cout<<"Inorder traversal";
    inordertraversal(root);

    cout<<"pre-order Traversal:";
    preordertraversal(root);

    cout<<"post-order traversal:";
    postordertraversal(root);
    

}