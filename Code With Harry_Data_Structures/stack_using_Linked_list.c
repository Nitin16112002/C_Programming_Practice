#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void linkedlisttraversal(struct node *ptr){
    while(ptr!=NULL){
        printf("Element= %d\n", ptr->data);
        ptr = ptr->next;
    }
    }
    int isfull(struct node *top){
        struct node *p = (struct node *)malloc(sizeof(struct node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
    }
    int isempty(struct node *top){
        if(top==NULL){
            return 1;
                }
    else{
        return 0;
    }
    }
    
struct node * push(struct node* top,int x){
        if(isfull(top)){
            return 1;
        }
        else{
            struct node *n = (struct node *)malloc(sizeof(struct node));
            n->next = top;
            n->data = x;
            top = n;
            return top;
        }}
        int pop(struct node **top){
            if(isempty(*top)){
                return 1;
                   }
            else{
                struct node *n = *top;
                *top = (*top)->next;
                int x = n->data;
                free(n);
                return x;
            }
        }
    
int main(){
    struct node *top = NULL;
    top=push(top, 9);
    top=push(top, 19);
    top=push(top, 92);
    top=push(top, 59);
    top=push(top, 293);
    linkedlisttraversal(top);
    printf("Successfully creaated \n");
    printf("Pooped element is %d\n", pop(&top));
    

    return 0;
}