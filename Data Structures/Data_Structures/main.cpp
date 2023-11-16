#include <iostream>
#include <stdio.h>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* head; //global variable, can be accessed anywhere
void Insert(int x);
void Print();

void Insert(int x){
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Print()
{
    struct Node* temp = head;
    printf("List is: ");
    while(temp != NULL)
    {
        printf(" %d %p", temp->data, (void*)temp);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{

    head = NULL ; //empty list
    printf("How many numbers? \n");
    int n,i,x;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        printf("Enter the number \n");
        scanf("%d", &x);
        Insert(x);
        Print();
    }

    return 0;
}
