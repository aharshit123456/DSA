#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *Next;
    struct node *Prev;
};

struct node *CREATE_NODE(int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->Next = NULL;
    new->Prev = NULL;
    return new;
}

void INSERT_NODE(struct node *toInsert, struct node *head)
{
    head->Next = toInsert;
    toInsert->Prev = head;
}

void DISPLAY_NODES(struct node *head)
{
    struct node *temp = head->Next;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->Next;
    }
    printf("\n");
}

struct node *CONVERT_ARRAY_TO_LIST(int *arr, int m, int n)
{
    struct node *head = CREATE_NODE(0);
    struct node *temp = head;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            struct node *new = CREATE_NODE(*(arr + i * m + j));
            temp->Next = new;
            new->Prev = temp;
            temp = new;
        }
    }
    return head;
}

int RETURN_DATA(int i, int j, int n, int m, struct node *LL2A)
{
    struct node *head = LL2A;
    for (int x = 0; x <= (i * n); x++)
    {
        head = head->Next;
    }
    for (int x = 0; x < j; x++)
    {
        head = head->Next;
    }
    return head->data;
}

int main()
{
    struct node *head = CREATE_NODE(0);
    struct node *n1 = CREATE_NODE(0);
    struct node *n2 = CREATE_NODE(2);
    struct node *n3 = CREATE_NODE(8);
    struct node *n4 = CREATE_NODE(3);
    struct node *n5 = CREATE_NODE(10);

    INSERT_NODE(n1, head);
    INSERT_NODE(n2, n1);
    INSERT_NODE(n3, n2);
    INSERT_NODE(n4, n3);
    INSERT_NODE(n5, n4);

    DISPLAY_NODES(head);
    int arr[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    struct node *ll2a = CONVERT_ARRAY_TO_LIST(*arr, 3, 3);
    DISPLAY_NODES(ll2a);

    printf("Data at %d %d is %d\n", 2, 2, RETURN_DATA(2, 2, 3, 3, ll2a));
    printf("Data at %d %d is %d\n", 0, 1, RETURN_DATA(0, 1, 3, 3, ll2a));

    return 0;
}