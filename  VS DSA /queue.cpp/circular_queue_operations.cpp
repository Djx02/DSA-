/*#include <stdio.h>

#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (front == -1 && rear == -1)
    {
        printf("Empty queue \n");
        front = rear = 0;
        queue[rear] = x;
    }

    else if ((rear + 1) % N == front)
    {

        printf("queue is full \n ");
    }

    else
    {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty \n ");
    }

    else if (front == rear)
    {

        printf("item is deleted from the queue : %d \n ", queue[front]);
        front = -1;
        rear = -1;
    }

    else
    {
        printf("Data item deleted :%d \n", queue[front]);
        front = (front + 1) % N;
    }
}

void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("Empty queue \n");
    }
    else
    {
        printf("Queue elements are : ");
        while (i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % N;
        }
        printf("%d ", queue[rear]);
    }
}

void peek()
{

    if (front == -1 && rear == -1)
    {
        printf("Empty queue \n ");
    }

    else
    {
        printf("\nOn peeking we found --> %d ", queue[front]);
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);

    dequeue();
    dequeue();
    display();
    peek();

    return 0;
}*/
#include <stdio.h>
int main()
{
    printf("Hello papa");
    return 0;
}