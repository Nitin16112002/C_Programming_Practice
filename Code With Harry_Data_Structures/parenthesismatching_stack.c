#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    char *arr;
};
int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return -1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return -1;
    }
    else{
        return 0;
    }
}
void push(struct stack *ptr,char val){
    if(isfull(ptr)){
        printf("The stack is full!\n");
            }
            else{
                ptr->top++;
                ptr->arr[ptr->top] = val;
            }
}
char pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("The stack is empty!\n");
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int parenthesischeck(char *exp){
    struct stack *sp;
    sp->size = 10;
    sp->top = -1;
    sp->arr = (char *)malloc(sizeof(char));
    for (int i = 0; exp[i] != '\0';i++){
        if(exp[i]=="("){
            push(sp, ")");
        }
        else if(exp[i]==")"){
            if(isempty(sp)){
                return 0;
            }
            else{
                pop(sp);
            }
        }
    }
    if(isempty(sp)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
        char * exp = "((8)(*--$$9))";
        if(parenthesischeck(exp)){
            printf("Parenthesis is matching\n");
        }
        else{
            printf("Parenthesis is not matching\n");
        }

return 0;
}