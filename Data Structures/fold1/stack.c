#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 101
#include <string.h>

/*
Stack ADT (LIFO)

Function Calls/Recursion, Undo in an Editor, Balanced Parantheses

Pop,Push,Top,IsEmpty

*/

// Array Implementation
/*int A[MAX_SIZE];
int top = -1;

void Push(int x){
	if(top == MAX_SIZE -1){
		printf("Error: stack overflow \n");
		return;
	}
	A[++top] = x;
}


void Pop(){
	if(top == -1){
		printf("Error: No element to pop\n");
		return;
	}
	top--;
}

int Top(){
	return A[top];
}

void Print(){
	int i;
	printf("Stack: ");
	for(i = 0; i<= top; i++)
		printf("%d ", A[i]);
	printf("\n");
}
*/
struct Node
{
	char data;
	struct Node *link;
};

// struct Node *top = NULL;
void Push(char x, struct Node *top)
{
	struct Node *temp = (struct Node *)malloc(sizeof(struct Node *));
	temp->data = x;
	temp->link = top;
	top = temp;
}

int Pop(struct Node *top)
{
	struct Node *temp;
	if (top == NULL)
		return -1;
	temp = top;
	top = top->link;
	free(temp);
	return top->data;
}

void Print(struct Node *top)
{
	struct Node *temp = top;
	printf("Forward: ");
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->link;
	}
	printf("\n");
}

// int main()
// {
// 	/*
// 	char C[51];
// 	printf("Enter a string: ");
// 	scanf("%s", C);
// 	ReverseString(C, strlen(C));
// 	printf("Output- %s", C);
// 	*/
// }
