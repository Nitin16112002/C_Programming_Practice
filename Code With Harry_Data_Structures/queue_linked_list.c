#include <stdio.h>
#include <stdlib.h>
struct node *f = NULL;
struct node *r = NULL;
struct node
{
    int data;
    struct node *next;
};
void linkedlist_traversal(struct node *ptr)
{
    printf("Printing the element of lists\n");
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
void enqueue(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("Queue is failed\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
        printf("Enqued element %d\n", val);
    }
}
int dequeue()
{
    struct node *n = f;
    int val = -1;
    if (f == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        f = f->next;
        val = n->data;
        free(n);
    }
    return val;
}
int main()
{
    linkedlist_traversal(f);
    printf("Dequing element %d\n", dequeue());
    enqueue(85);
    enqueue(85);
    enqueue(85);
    enqueue(85);
    printf("Dequing element %d\n", dequeue());
    printf("Dequing element %d\n", dequeue());
    // printf("Dequing element %d\n", dequeue());
    // printf("Dequing element %d\n", dequeue());
    linkedlist_traversal(f);
    return 0;
}