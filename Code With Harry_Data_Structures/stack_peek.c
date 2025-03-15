#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int peek(struct stack *ptr, int i)
{
    int arrind = ptr->top - i + 1;
    if (arrind < 0)
    {
        printf("Invalid position\n");
        return -1;
    }
    else
    {
        printf("%d\n", arrind);
        return ptr->arr[arrind];
    }
}
void push(struct stack *ptr, int val)
{
    if (isfull(ptr))
    {
        printf("Element %d can't be pushed because stack is full\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int main()
{
    struct stack *ptr = (struct stack *)malloc(sizeof(struct stack));
    ptr->size = 10;
    ptr->top = -1;
    ptr->arr = (int *)malloc(sizeof(int));
     printf("Before push %d\n", isfull(ptr));
     printf("Before push %d\n", isempty(ptr));
    // push(ptr, 25);
    // push(ptr, 63);
    // push(ptr, 29);
    push(ptr, 46);
    push(ptr, 89);
    push(ptr, 6);
    push(ptr, 5);
    push(ptr, 75);
     printf("The peeked element is %d\n", peek(ptr, 1));
    //  printf("After push %d\n", isfull(ptr));
    //  printf("After push %d\n", isempty(ptr));

    // for (int j = 1; j <= ptr->top +1; j++)
    // {
    //     printf("The value at position %d is %d\n", j, peek(ptr, j));
    // }
    return 0;
}