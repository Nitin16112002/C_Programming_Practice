#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node * treeCreation(int data){
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
}

void *preOrder(struct node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void *postorder(struct node* root){
    if(root!=NULL){
        preOrder(root->left);
        preOrder(root->right);
         printf("%d ", root->data);
    }
}

void *inorder(struct node* root){
    if(root!=NULL){
         inorder(root->left);
         printf("%d ", root->data);
         inorder(root->right);
    }
}

int main(){

    struct node *p = treeCreation(7);
    struct node *q = treeCreation(5);
    struct node *r = treeCreation(10);
    struct node *s = treeCreation(3);
    struct node *t = treeCreation(6);

    p->left = q;
    p->right = r;

    q->left = s;
    q->right = t;

    preOrder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    inorder(p);
    return 0;
}