#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int front;
    int rear;
    int *S;
};

void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->S = (int *)malloc(q->size * sizeof(int));
}

void enqueue(struct Queue *q, int x)
{
    if (q->rear == q->size - 1)
    {
        printf("Full stack \n");
    }
    else
    {
        q->rear++;
        q->S[q->rear] = x;
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
        q->front++;
        q->S[q->front] = x;
    }
    return x;
}

void display(struct Queue q)
{
    int i;
    for (i = q.front; i <= q.rear; i++)
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
    display(q);
    printf("%d ", dequeue(&q));

    return 0;
}