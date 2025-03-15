    #include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    char *arr;
};
int isfull(struct stack *ptr){
    if (ptr->top == ptr->size - 1){
        return 1;
    }
    else{
        return 0;
    }}
int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *ptr,char val){
    if(isfull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
char pop(struct stack *ptr){
    char val;
    if(isempty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
char stacktop(struct stack *ptr){
    return ptr->arr[ptr->top];
}
int match(char a,char b){
    if(a=='{'&& b=='}'){
        return 1;
    }
    if(a=='['&& b==']'){
        return 1;
    }
    if(a=='('&& b==')'){
        return 1;
    }
    else{
        return 0;
    }
}
int parenthesismatch(char *exp){
    struct stack *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * (sizeof(char)));
    char poppedchar;
    for (int i = 0; exp[i] != '\0';i++){
        if(exp[i]=='('|| exp[i]=='{'||exp[i]=='['){
            push(sp, exp[i]);
        }
        else if(exp[i]==')'|| exp[i]=='}' || exp[i]==']'){
            if(isempty(sp)){
                return 0;
            }
            poppedchar = pop(sp);
            if(!match(poppedchar,exp[i])){
                return 0;
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
char * exp = "{(2*3))}";
if(parenthesismatch(exp)){
     printf("The parenthesis is balanced");
}
else{ printf("The parenthesis is unbalanced");}
return 0;
}