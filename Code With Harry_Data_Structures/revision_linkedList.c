#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traversal(struct node* ptr){
    while(ptr!=NULL){
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertatFirst(struct node* head,int value){
    struct node *ptr = (struct node *)malloc(sizeof(struct node ));
    ptr->data = value;
    ptr->next = head;
    head = ptr;
    return ptr;
}

struct node *insertatEnd(struct node* head,int value){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->data = value;
    ptr->next = NULL;
    return head;
}

struct node *insertatIndex(struct node* head,int value,int index){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    struct node *z;
    int i = 0;
    while(i!=index-2){
        p = p->next;
        i++;
    }
    z = p->next;
    p->next = ptr;
    ptr->data = value;
    ptr->next = z;
    return head;
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 5;
    head->next = second;
    second->data = 61;
    second->next = third;
    third->data = 23;
    third->next = NULL;
    // //  printf("\n%d\n", head->data);
    // traversal(head);
    // printf("\n");
    head=insertatFirst(head, 2);
    // traversal(head);
    // //  printf("\n%d\n", head->data);

     head = insertatEnd(head, 8);
    traversal(head);
    printf("\nAfter\n");
    head = insertatIndex(head, 6, 3);
    traversal(head);

    return 0;
}