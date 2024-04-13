#include <stdio.h>
#include "stack.c"

char rators[5] = "*/+-";

int isOperator(char s)
{
    int flag = 0;
    for (int i = 0; i < 4; i++)
    {
        if (s == rators[i])
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int performOperation(char rator, int op1, int op2)
{
    switch (rator)
    {
    case '*':
        return op1 * op2;
    case '/':
        return op1 / op2;
    case '+':
        return op1 + op2;
    case '-':
        return op1 - op2;
    default:
        printf("Incorrect Operator");
        return 0;
    }
}
int evaluatepostfix(char exp[])
{

    struct Node *top;
    top->data = exp[0];
    top->link = NULL;

    for (int i = 0; i < strlen(exp); i++) // Changed the loop condition
    {
        if (!isOperator(exp[i]))
        {
            Push(exp[i] - '0', top); // Converting char to int
        }
        else
        {
            int op2 = Pop(top);
            int op1 = Pop(top);
            int res = performOperation(exp[i], op1, op2);
            Push(res, top);
            printf("%d %d %d \n", op1, op2, res);
        }
    }
    Print(top);
    return Pop(top); // Returning the result from the stack
}

void main()
{

    printf("%s \n", rators);
    char expression[10] = "23*54*+9-";
    printf("%s \n", expression);
    int answer = evaluatepostfix(expression);
    printf("Answer is: %d \n", answer);
}