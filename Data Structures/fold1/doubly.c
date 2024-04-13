#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head; //global variable - pointer to head mode.

struct Node* GetNewNode(int x){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->prev = NULL;
	temp->next = NULL;
	return temp;
}

void InsertAtHead(int x){
	struct Node* newNode = GetNewNode(x);
	if(head == NULL){
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode-> next = head;
	head = newNode;
}

void Print(){
	struct Node* temp = head;
	printf("Forward: ");
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	head = NULL;
	InsertAtHead(2); Print();
        InsertAtHead(4); Print();
        InsertAtHead(6); Print();
}
