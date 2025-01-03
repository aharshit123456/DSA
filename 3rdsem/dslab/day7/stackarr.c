// C program for array implementation of stack
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a stack
struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};

// function to create a stack of given capacity. It initializes size of
// stack as 0
struct Stack *createStack(unsigned capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

// Stack is full when top is equal to the last index
int isFull(struct Stack *stack)
{
    return stack->top == stack->capacity - 1;
}

// Stack is empty when top is equal to -1
int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

// Function to add an item to stack. It increases top by 1
void push(struct Stack *stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

// Function to remove an item from stack. It decreases top by 1
int pop(struct Stack *stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}

// Function to return the top from stack without removing it
int peek(struct Stack *stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}

// Driver program to test above functions
int main()
{
    struct Stack *stack = createStack(100);

    printf("1. Push\n2. Pop\n3. Peek\n 4. Check if the Stack is empty\n 5. Check if the stack if full \n 0. Exit\n");
    int option = 0;
    while (1)
    {
        scanf("%d", &option);
        switch (option)
        {
        case 0:
            return 0;
            break;
        case 1:
            int data;
            scanf("%d", &data);
            push(stack, data);
            break;
        case 2:
            int data;
            scanf("%d", &data);
            pop(stack);
            break;
        case 3:
            int data;
            scanf("%d", &data);
            peek(stack);
            break;
        case 4:
            if (isEmpty(stack))
            {
                printf("Stack is empty\n");
            }
            else
            {
                printf("Stack is not empty\n");
            }
            break;
        case 5:
            if (isFull(stack))
            {
                printf("Stack is full\n");
            }
            else
            {
                printf("Stack is not full\n");
            }
            break;
        default:
            break;
        }
    }
    return 0;
}
