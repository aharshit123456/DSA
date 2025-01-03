#include <stdio.h>
#include <stdlib.h>

struct node
{
    int a;
    char c;
    struct node2 *Next;
};

struct node2
{
    int a;
    struct node *Next;
};

int main()
{
    /*
    struct node *n1 = (struct node *)malloc(sizeof(struct node));
    struct node *n2 = (struct node *)malloc(sizeof(struct node));
    struct node *n3 = (struct node *)malloc(sizeof(struct node));

    n1->a = 90;
    n1->c = 'M';
    n1->Next = n2;

    n2->a = 40;
    n2->c = 'X';
    n2->Next = n3;

    n3->a = 50;
    n3->c = 'C';
    n3->Next = NULL;

    printf("%d \n", n1->a);
    printf("%c \n", n1->c);

    printf("%d \n", n2->a);
    printf("%c \n", n2->c);

    printf("%d \n", n3->a);
    printf("%c \n", n3->c);
*/
    //------------------------>

    /*
        struct node *nodes = (struct node *)malloc(3 * sizeof(struct node));
        for (int i = 0; i < 3; i++)
        {
            (nodes + i)->a = i;
            (nodes + i)->c = 'A' +  i;
            (nodes + i)->Next = (nodes + i + 1);
        }

        for (int i = 0; i < 3; i++)
        {
            printf("%d \n", (nodes + i)->a);
            printf("%c \n", (nodes + i)->c);
        }
    */

    /*
        struct node *head = (struct node *)malloc(sizeof(struct node));
        head->Next = NULL;

        struct node *temp = head;
        for (int i = 0; i < 5; i++)
        {
            struct node *new = (struct node *)malloc(sizeof(struct node));
            new->a = i;
            new->c = 'A' + i;
            new->Next = NULL;
            printf("%c", new->c);
            temp->Next = new;
            temp = new;
        }

        // struct node *temp = (struct node *)malloc(sizeof(struct node));

        temp = head->Next;
        for (int i = 0; i < 5; i++)
        {
            printf("%d \n", temp->a);
            printf("%c \n", temp->c);
            temp = temp->Next;
        }
    */

    struct node *n1 = (struct node *)malloc(sizeof(struct node));
    struct node2 *n2 = (struct node2 *)malloc(sizeof(struct node2));
    struct node *n3 = (struct node *)malloc(sizeof(struct node));

    n1->a = 90;
    n1->c = 'M';
    n1->Next = n2;

    n2->a = 40;
    n2->Next = n3;

    n3->a = 50;
    n3->c = 'C';
    n3->Next = NULL;

    printf("%d \n", n1->a);
    printf("%c \n", n1->c);

    printf("%d \n", n2->a);

    printf("%d \n", n3->a);
    printf("%c \n", n3->c);

    return 0;
}