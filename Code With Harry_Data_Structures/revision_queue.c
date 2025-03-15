#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct queue
{
    int f, r;
    int size;
    int *arr;
};

int isfull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        printf("Queue is full\n");
    }
    return 0;
}

int isempty(struct queue *q)
{
    if (q->f == q->r)
    {
        printf("Queue is empty\n");
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isfull(q))
    {
        printf("Can't insert \n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

void dequeue(struct queue *q)
{
    if (isempty(q))
    {
        printf("Nothing to pop\n");
    }
    else
    {
        q->f++;
        int a = q->arr[q->f];
        printf("Dequed element is %d\n", a);
    }
}

int main()
{

    struct queue q;
    q.size = 10;

    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    enqueue(&q, 5);
    enqueue(&q, 52);
    enqueue(&q, 55);

    dequeue(&q);
    dequeue(&q);
    return 0;
}