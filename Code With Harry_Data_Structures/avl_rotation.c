#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
    int height;
};

int getHeight(struct node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return n->height;
}

struct node *createNode(int key)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->key = key;
    n->left = NULL;
    n->right = NULL;
    n->height = 1;
    return n;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int getBalanceFactor(struct node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return (getHeight(n->left) - getHeight(n->right));
}

struct node *rightRotate(struct node *y)
{
    struct node *x = y->left;
    struct node *t = x->right;

    x->right = y;
    y->left = t;

    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return x;
}

struct node *leftRotate(struct node *x)
{
    struct node *y = x->right;
    struct node *t = y->left;

    y->left = x;
    x->right = t;

    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

struct node *insertNode(struct node *n, int key)
{
    if (n == NULL)
    {
        return createNode(key);
    }
    if (key < n->key)
    {
        n->left = insertNode(n->left, key);
    }
    else if (key > n->key)
    {
        n->right = insertNode(n->right, key);
    }

    n->height = max(getHeight(n->left), getHeight(n->right)) + 1;

    int bf = getBalanceFactor(n);

    // left case
    if (bf > 1 && key < n->left->key)
    {
        return rightRotate(n);
    }

    // right case
    if (bf < -1 && key > n->right->key)
    {
        return leftRotate(n);
    }

    // left-right case
    if (bf > 1 && key > n->left->key)
    {
        n->left = leftRotate(n->left);
        return rightRotate(n);
    }

    // right left case
    if (bf < -1 && key < n->right->key)
    {
        n->right = rightRotate(n->right);
        return leftRotate(n);
    }

    return n;
}

void preorder(struct node *n)
{
    if (n != NULL)
    {
        printf("%d ", n->key);
        preorder(n->left);
        preorder(n->right);
    }
}

int main()
{

    struct node *root = NULL;

    root = insertNode(root, 1);
    root = insertNode(root, 2);
    root = insertNode(root, 4);
    root = insertNode(root, 5);
    root = insertNode(root, 6);
    root = insertNode(root, 3);

    preorder(root);

    return 0;
}