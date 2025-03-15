#include<stdio.h>
#include<conio.h>
struct stack{
    int top;
    int size;
    int *arr;
};

int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
    printf("Stack if full\n");
    return 1;}
    else{
    return 0;
    }
}

int isempty(struct stack *ptr){
    if(ptr->top==-1){
    printf("Stack is empty\n");
    return 1;
    }
    else{
    return 0;
    }
}

void push(struct stack *ptr,int val){
    if(isfull(ptr)){
    printf("The element %d can't be inserted because stack is full\n", val);
    }
    else{
    ptr->top++;
    ptr->arr[ptr->top] = val;
        }
}

void pop(struct stack *ptr){
    if(isempty(ptr)){
    printf("No element can be poped\n");
        }
        else{
    int val = ptr->arr[ptr->top];
    ptr->top--;
    printf("The poped element is %d\n", val);
        }
}

int main(){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sizeof(int));
    push(sp, 5);
    push(sp, 6);
    push(sp, 8);
    push(sp, 3);
    push(sp, 1);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    return 0;
}