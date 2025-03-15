#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:= %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertatend(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->data = data;
    ptr->next = NULL;
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

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
    head = insertatend(head, 102);
    traversal(head);
    return 0;
}