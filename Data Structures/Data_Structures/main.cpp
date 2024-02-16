#include <iostream>
#include <stdio.h>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* head; //global variable, can be accessed anywhere
void Insert(int x);
void Insertat(int data, int n);
void Print();
void Delete(int n);
void Reverse();

void Insert(int x){
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Insertat(int data, int n){
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(n==1){
        temp1->next = head;
        head = temp1;
        return;
    }

    Node* temp2 = head;
    for(int i=0;i<n-2;i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void Print()
{
    struct Node* temp = head;
    printf("List is: ");
    while(temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void Delete(int n){

/*
*Fix the links*
n-1 links to n+1 node
head links to 2nd posn address
N node deletion has N-1 linked to NULL

*Free the space*
delete node or free(node)
*/

    struct Node* temp1=head;
    if(n ==1){
        head = temp1->next;
        delete temp1;
        return;
    }
    int i;
    for(i = 0;i<n-2;i++){
        temp1 = temp1->next;
    }
    struct Node* temp2 = temp1->next;
    temp1->next = temp2->next;
//    free(temp2);
    delete temp2;
}

void Reverse(){
    struct Node *current,*next,*prev;
    current = head;
    prev = NULL;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main()
{

    head = NULL ; //empty list
//    printf("How many numbers? \n");
//    int n,i,x;
//    scanf("%d", &n);
//    for(i = 0; i<n; i++){
//        printf("Enter the number \n");
//        scanf("%d", &x);
//        Insert(x);
//        Print();
//    }


    Insertat(2,1);//2
    Insertat(3,2);//2 3
    Insertat(4,1);//4 2 3
    Insertat(5,2); // 4 5 2 3
    Print();

//    Delete(2); //4 2 3
//    Print();

    Reverse();
    Print();
    return 0;
}
