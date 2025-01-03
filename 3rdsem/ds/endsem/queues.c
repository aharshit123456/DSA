/*
implements queues
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 10

struct node
{
    int data;
    struct node *next;
};

struct queue
{
    int items[MAX];
    int front;
    int rear;
}
// queues are FIFO

intialise(struct queue *q)
{
    q->front = -1;
    q->rear = 0;
}

// isEmpty
bool isEmpty(struct queue *q)
{
    return q->front == -1;
}
// isFull
bool isFull(struct queue *q)
{
    return q->rear == MAX - 1;
}

// enqueue
void enqueue(struct queue *q, int value)
{
    if (isFull(q))
    {
        printf("Queue is full\n");
    }
    else
    {
        if (q->front == -1)
        {
            q->front = 0;
        }
        q->items[q->rear] = value;
        q->rear++;
    }
}

// dequeue
void dequeue(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
    }
    else
    {
        q->front++;
        if (q->front >= q->rear)
        {
            q->front = q->rear = -1;
        }
    }
}

// printQueue
void printQueue(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Current Queue: ");
    for (int i = q->front + 1; i < q->rear; i++)
    {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}
// priority queues

int main()
{
    struct queue q;
    intialise(&q);
    // Enqueue elements
    enqueue(&q, 10);
    printQueue(&q);

    enqueue(&q, 20);
    printQueue(&q);

    enqueue(&q, 30);
    printQueue(&q);

    // Peek front element
    // printf("Front element: %d\n", peek(&q));

    // Dequeue an element
    dequeue(&q);
    printQueue(&q);

    // Peek front element after dequeue
    // printf("Front element after dequeue: %d\n", peek(&q));

    return 0;
}