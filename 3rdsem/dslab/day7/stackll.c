/*
stackll.c
This code snippet implements a stack using linked list.
Features include:
Push from beginning.
Pop from top.
Peek at top.

*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Stack
{
    struct Node *top;
} Stack;

struct Node *create_node(int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

struct Stack *push(struct Stack *stack, struct Node *new_node)
{
    if (stack->top == NULL)
    {
        stack->top = new_node;
    }
    else if (!new_node)
    {
        printf("OVERFLOW \n");
    }
    else
    {
        new_node->next = stack->top;
        stack->top = new_node;
    }
    return stack;
}

void *pop(struct Stack *stack)
{
    if (stack->top == NULL)
    {
        printf("UNDERFLOW \n");
        return NULL;
    }
    struct Node *temp = stack->top;
    stack->top = stack->top->next;
    printf("Popped %d\n", temp->data);
    // return temp;
}

int main()
{
    // struct Node *top = NULL;
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));

    stack->top = NULL;
    struct Node *n1 = create_node(1);
    struct Node *n2 = create_node(2);
    struct Node *n3 = create_node(3);

    stack = push(stack, n1);
    stack = push(stack, n2);
    stack = push(stack, n3);

    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);

    printf("Size of stack is : %d\n", sizeof(stack));
    struct Stack *stack2 = (struct Stack *)malloc(sizeof(struct Stack));

    stack2->top = NULL;
    struct Node *n12 = create_node(5);
    struct Node *n22 = create_node(6);
    struct Node *n32 = create_node(7);

    stack2 = push(stack2, n12);
    stack2 = push(stack2, n22);
    stack2 = push(stack2, n32);

    pop(stack2);
    pop(stack2);
    pop(stack2);
    pop(stack2);
    printf("Size of a node is : %d\n", sizeof(struct Node));
    printf("Size of stack is : %d\n", sizeof(stack2));
}
