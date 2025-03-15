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

// void *preOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         printf("%d ", root->data);
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }

// void *postorder(struct node *root)
// {
//     if (root != NULL)
//     {
//         preOrder(root->left);
//         preOrder(root->right);
//         printf("%d ", root->data);
//     }
// }

void *inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void duplicate(struct node* root){
    int arr[10];
    int value = 0;

    for (int i =0 ; i<10;i++){
            if(root!=NULL){
            arr[i] = root->data;
    }
            root = root->left;
    }
    for (int i =0; i<10;i++){
        printf("%d ", arr[i]);
    }

}

// struct node *duplicatesearchIter(struct node *root)
// {
//     while (root != NULL)
//     {
//         // if(root->data==key){
//         //     return root;
//         // }

//         if (key < root->data)
//         {
//             return searchIter(root->left, key);
//         }
//         else
//         {
//             return searchIter(root->right, key);
//         }
//     }
//     return NULL;
// }

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

// struct node *searchingInBST(struct node *root, int key)
// {
//     if (root != NULL)
//     {
//         if (key == root->data)
//         {
//             return root;
//         }
//         else if (key < root->data)
//         {
//             return searchingInBST(root->left, key);
//         }
//         else
//         {
//             return searchingInBST(root->right, key);
//         }
//     }
// }

// struct node* searchIter(struct node* root,int key){
//     while(root!=NULL){
//         if(root->data==key){
//             return root;
//         }
//         else if(key<root->data){
//             return searchIter(root->left, key);
//         }
//         else{
//             return searchIter(root->right, key);
//         }
//     }
//     return NULL;
// }

// struct node* insertNode(struct node* root,int key){
//     struct node *prev = NULL;
//     while(root!=NULL){
//         prev = root;
//         if(root->data==key){
//             return root;
//         }
//         else if(root->data>key){
//             root = root->left;
//         }
//         else{
//             root = root->right;
//         }

//     }
//     struct node *new = treeCreation(key);
//     if(key<prev->data){
//         prev->left = new;
//     }
//     else{
//         prev->right = new;
//     }

// }

int main()
{

    struct node *p = treeCreation(15);
    struct node *q = treeCreation(15);
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

    // int key;
    // printf("Enter the element to insert-\n");
    // scanf("%d", &key);
    // struct node *y = insertNode(p,key);

    // inorder(p);
    duplicate(p);
    // printf("\n");
    // printf("%d\n",p->left->data);

    return 0;
}

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int len;
//     int arr[] = {201, 20, 6, 2, 6, 2};
//     len = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < len; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     printf("\n");
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     for (int j = i; j < 5;j++){
//     //         printf("%d ", arr[j]);
//     //     }
//     //         printf("\n");
//     // }
//     int val;
//     for (int i = 0; i < len; i++)
//     {
//         for (int j = i + 1; j < len; j++)
//         {

//             if (arr[i] == arr[j])
//                 // val++;
//                 printf("%d\n", arr[j]);
//         }
//     }
//     return 0;
// }