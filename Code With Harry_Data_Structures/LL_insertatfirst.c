#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element= %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *insertatfirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 6;
    head->next = second;
    second->data = 25;
    second->next = third;
    third->data = 96;
    third->next = fourth;
    fourth->data = 2;
    fourth->next = NULL;

    printf("Linked list before insertion \n");
    traversal(head);
    printf("Linked list after insertion \n");
    head = insertatfirst(head, 102);
    traversal(head);
    return 0;
}