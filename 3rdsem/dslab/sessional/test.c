#include <stdio.h>
#include <stdlib.h>

struct comp
{
    struct comp *next;
    struct detail *addr_detail;
    char *name;
};

struct detail
{
    struct detail *next;
    int year;
    int amount;
};

int search(struct comp *comp, int year, char *company)
{
    struct comp *temp = comp;
    struct detail *temp_detail;

    while (temp->name != company)
    {
        temp = temp->next;
    }
    temp_detail->next = temp->addr_detail;
    while (temp_detail->year != year)
    {
        temp_detail = temp_detail->next;
    }
    return temp_detail->amount;
}

int main()
{
    struct comp *head = (struct comp *)malloc(sizeof(struct comp));
    struct comp *c1 = (struct comp *)malloc(sizeof(struct comp));
    struct comp *c2 = (struct comp *)malloc(sizeof(struct comp));
    struct comp *c3 = (struct comp *)malloc(sizeof(struct comp));
    struct detail *d1 = (struct detail *)malloc(sizeof(struct detail));
    struct detail *d2 = (struct detail *)malloc(sizeof(struct detail));
    struct detail *d3 = (struct detail *)malloc(sizeof(struct detail));
    struct detail *d4 = (struct detail *)malloc(sizeof(struct detail));
    struct detail *d5 = (struct detail *)malloc(sizeof(struct detail));
    struct detail *d6 = (struct detail *)malloc(sizeof(struct detail));

    c1->name = "TCS";
    c2->name = "Infy";
    c3->name = "Wipro";
    c1->next = c2;
    c2->next = c3;

    d1->year = 1981;
    d2->year = 1981;
    d3->year = 1971;
    d4->year = 1977;
    d5->year = 1990;
    d6->year = 1995;

    d1->amount = 60;
    d2->amount = 71;
    d3->amount = 40;
    d4->amount = 60;
    d5->amount = 30;
    d6->amount = 45;

    c1->addr_detail = d1;
    c2->addr_detail = d3;
    c3->addr_detail = d5;

    d1->next = d2;
    d3->next = d4;
    d5->next = d6;

    head->next = c1;
    printf("%d\n", search(head, 1995, "Wipro"));
    return 0;
}