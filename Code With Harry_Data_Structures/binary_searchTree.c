#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *treeCreation(int data)
{
    
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
}

void *preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void *postorder(struct node *root)
{
    if (root != NULL)
    {
        preOrder(root->left);
        preOrder(root->right);
        printf("%d ", root->data);
    }
}

void *inorder(struct node *root)    
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

struct node *searchingInBST(struct node *root, int key)
{
    if (root != NULL)
    {
        if (key == root->data)
        {
            return root;
        }
        else if (key < root->data)
        {
            return searchingInBST(root->left, key);
        }
        else
        {
            return searchingInBST(root->right, key);
        }
    }
}

struct node* searchIter(struct node* root,int key){
    while(root!=NULL){
        if(root->data==key){
            return root;
        }
        else if(key<root->data){
            return searchIter(root->left, key);
        }
        else{
            return searchIter(root->right, key);
        }
    }
    return NULL;
}

struct node* insertNode(struct node* root,int key){
    struct node *prev = NULL;
    while(root!=NULL){
        prev = root;
        if(root->data==key){
            return root;
        }
        else if(root->data>key){
            root = root->left;
        }
        else{
            root = root->right;
        }

    }
    struct node *new = treeCreation(key);
    if(key<prev->data){
        prev->left = new;
    }
    else{
        prev->right = new;
    }

}

int main()
{

    struct node *p = treeCreation(15);
    struct node *q = treeCreation(5);
    struct node *r = treeCreation(13);
    struct node *s = treeCreation(30);
    struct node *t = treeCreation(60);

    p->left = q;
    p->right = r;

    q->left = s;
    q->right = t;

    // preOrder(p);
    // printf("\n");
    // postorder(p);
    // printf("\n");

    // int key;
    // printf("Enter the element to search-\n");
    // scanf("%d", &key);
    // struct node *z = searchingInBST(p, key);
    // if (z != NULL)
    // {
    //     printf("found:- %d\n", z->data);
    // }
    // else
    // {
    //     printf("%d not found\n", key);
    // }
    // int key;
    // printf("Enter the element to search-\n");
    // scanf("%d", &key);
    // struct node *z = searchingInBST(p, key);
    // if (z != NULL)
    // {
    //     printf("found:- %d\n", z->data);
    // }
    // else
    // {
    //     printf("%d not found\n", key);
    // }


    int key;
    printf("Enter the element to insert-\n");
    scanf("%d", &key);
    struct node *y = insertNode(p,key);

    inorder(p);
    printf("\n");
    // printf("%d\n",p->left->data);
 
    return 0;
}