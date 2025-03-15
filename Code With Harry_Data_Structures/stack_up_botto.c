#include<stdio.h>
#include<conio.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr){
    if (ptr->top==-1){
        return -1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack *ptr){
    if (ptr->top==ptr->size-1){
        return -1;
    }
    else{
        return 0;
    }
}
void push(struct stack*ptr,int val){
    if(isfull(ptr)){
        printf("The stack is full\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
            }}
int pop(struct stack *ptr){;
    if(isempty(ptr)){
        printf("The stack is empty\n");
        return 1;
            }
    else{
       int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
}}
int stackTop(struct stack* sp){
    return sp->arr[sp->top];
}
 
int stackBottom(struct stack* sp){
    return sp->arr[0];
}
 
int main(){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int*)malloc(sp->size * sizeof(struct stack));
    push(sp, 25);
     push(sp, 63);
     push(sp, 29);
     push(sp, 12);
     push(sp, 8);
    printf("Stack has been created successfully %d %d\n",stackTop(sp),stackBottom(sp));
    
    return 0;
}