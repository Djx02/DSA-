#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->S = (int *)malloc(q->size * sizeof(int));
}

void enqueue(struct Queue *q, int x)
{
    if ((q->rear+1)%q->size==q->front)
    {
        printf("Full stack \n");
    }
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear] = x;
    }
}

int dequeue(struct Queue *q)
{
    int x = -1;
    if (q->front == q->rear)
    {
        printf("Empty queue \n");
    }
    else
    {
        q->front=(q->front+1)%q->size;
        q->Q[q->front] = x;
    }
    return x;
}

void display(struct Queue q)
{
    int i;
    for (i = q.front+1; i <= (q.rear+1)%q.size; i++)
    {
        printf("%d ", q.S[i]);
    }
}

int main()
{
    struct Queue q;
    create(&q, 5);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
 
   

    dequeue(&q);
    dequeue(&q);


    display(q);
    

    return 0;
}