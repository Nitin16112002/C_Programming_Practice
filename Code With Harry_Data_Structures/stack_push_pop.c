#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack* ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack * ptr,int val){
    if(isfull(ptr)){
        printf("Element %d can't be pushed because stack is full\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
            }
}
int pop(struct stack* ptr){
    if(isempty(ptr)){
        printf("Stack underflow! can't pop elemet\n");
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main(){
    struct stack * sp  = (struct stack *)malloc(sizeof(struct stack));
    
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sizeof(int));
     printf("Stack has been created successfully\n");
     printf("Before push %d\n", isfull(sp));
     printf("Before push %d\n", isempty(sp));
     push(sp, 25);
     push(sp, 63);
     push(sp, 29);
     push(sp, 12);
     push(sp, 8);
     int a=pop(sp);
     int b=pop(sp);
     int c=pop(sp);
     printf("Popped element is %d\n", a);
     printf("Popped element is %d\n", b);
     printf("Popped element is %d\n", c);
     printf("After push %d\n", isfull(sp));
     printf("After push %d\n", isempty(sp));
     return 0;
}