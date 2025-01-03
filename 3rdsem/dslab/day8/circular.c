#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void displayCircular(struct Node *head)
{
    struct Node *temp = head;
    while (temp->next != head)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("%d \n", temp->data);
}

int main()
{
    printf("Program has started\n");
    // declaring the nodes
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n4 = (struct Node *)malloc(sizeof(struct Node));
    // connecting the nodes
    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    // making the ll circular
    n4->next = head;
    printf("Program has started\n");

    head->data = 0;
    n1->data = 1;
    n2->data = 2;
    n3->data = 3;
    n4->data = 4;
    displayCircular(head);
    printf("Program has started\n");

    // swap first (head) and last node(n4)
    // h1234 -> 4123h
    head->next = n4;
    n4->next = n1;
    n3->next = head;

    displayCircular(n4);

    // insert node between first and previous last
    // 4123h -> 54123h

    struct Node *n5 = (struct Node *)malloc(sizeof(struct Node));
    n5->data = 5;
    n5->next = n4;
    head->next = n5;
    // n3->next = head;

    displayCircular(n5);
    return 0;
}