#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f, r;
    int *arr;
};
int isfull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
       
        return 1;
    }
    
        return 0;
  
}
int isempty(struct queue *q)
{
    if (q->r == q->f)
    {
   
        return 1;
    }
    
        return 0;
 
}

void enque(struct queue *q, int val)
{
    if (isfull(q))
    {
            printf("Queue is full\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        printf("Enqueued element = %d\n", val);
    }
}
int dequeue(struct queue *q)
{
    int a;
    if (isempty(q))
    {
             printf("Queue is empty\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
        printf("Dequed element = %d\n",a);
    }
    return a;
}
int main()
{
    struct queue q;
    q.size = 2;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enque(&q, 58);
    enque(&q, 58);
    
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    return 0;
}