#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traversal(struct node * ptr){
        while(ptr!=NULL){
            printf("Element= %d\n", ptr->data);
            ptr = ptr->next;
                 }
}
struct node * insertatindex(struct node* head,int data,int index){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next=p->next;
    p->next = ptr;
    return head;
}
int main(){
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
    third->data =96;
    third->next = fourth;
    fourth->data =2;
    fourth->next = NULL;

    printf("Linked list before insertion \n");
    traversal(head);
    printf("Linked list after insertion \n");
    head=insertatindex(head, 102,3);
    traversal(head);
return 0;
}