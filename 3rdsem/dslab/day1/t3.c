#include <stdio.h>

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void swap(int *a, int *b)
{
    int *temp = a;
    *a = *b;
    *b = *temp;
    printf("FUnction REached");
}

int main()
{
    int (*a)(int, int);

    a = sum;
    int d = a(10, 20);

    printf("%d \n", d);

    a = swap;
    int k = 10;
    int m = 20;

    printf("Before Swapping: %d %d \n", k, m);

    swap(&k, &m);

    printf("After Swapping: %d %d \n", k, m);

    return 0;
}