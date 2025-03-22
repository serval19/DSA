#include <stdio.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
void preorder(struct node *root){
    if(root==0){
        return;
    }
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node *root){
    if(root==0){
        return;
    }
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}
void postorder(struct node *root){
    if(root==0){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}
void main(){
    struct node *root;
    preorder(root);
    inorder(root);
    postorder(root);
}