#include <stdio.h>
#include <stdlib.h>

struct emp
{
    char name[20];
    int salary;
    int empcode;
};

void main()
{
    struct emp *e = (struct emp *)malloc(2 * sizeof(struct emp));
    printf("Starting program \n");
    for (int i = 0; i < 2; i++)
    {
        printf("Enter name: ");
        scanf("%s", e[i].name);
        printf("Enter salary: ");
        scanf("%d", &e[i].salary);
        printf("Enter empcode: ");
        scanf("%d", &e[i].empcode);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("Name: %s\n", e[i].name);
        printf("Salary: %d\n", e[i].salary);
        printf("Empcode: %d\n", e[i].empcode);
    }

    e = (struct emp *)realloc(e, 3 * sizeof(struct emp));
    printf("Restarting program \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter name: ");
        scanf("%s", e[i].name);
        printf("Enter salary: ");
        scanf("%d", &e[i].salary);
        printf("Enter empcode: ");
        scanf("%d", &e[i].empcode);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s\n", e[i].name);
        printf("Salary: %d\n", e[i].salary);
        printf("Empcode: %d\n", e[i].empcode);
    }
}