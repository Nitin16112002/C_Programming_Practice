#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct circularqueue{
    int f, r,size;
    int *arr;
};
int isfull(struct circularqueue *q){
    if((q->r+1)%q->size==q->f){
        return 1;
    }
    return 0;
}
int isempty(struct circularqueue *q){
    if(q->r==q->f){
        return 1;
    }
        return 0;
}
void enque(struct circularqueue *q,int val){
    if(isfull(q)){
        printf("Queue is full \n");
    }
    else{
        q->r=(q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("Enqueued element is %d\n", val);
    }
}
int dequeue(struct circularqueue *q ){
    if(isempty(q)){
        printf("Queue is empty \n");
       
    }
    else{
        q->f = (q->f + 1) % q->size;
        int a;
        a = q->arr[q->f];
        printf("Dequeued element is %d\n", a);
        return a;
    }
}
int main(){
    struct circularqueue q;
    q.size = 3;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enque(&q, 7);
    enque(&q, 6);
    // enque(&q, 5);
    // enque(&q, 4);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    return 0;
}