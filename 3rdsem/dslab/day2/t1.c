#include <stdio.h>
#include <stdlib.h>

void main()
{

    int n = 20;
    int *a = (int *)malloc(n * sizeof(int));

    for (int i = 1; i < n; i++)
    {
        a[i] = i + 1;
        printf("%d \n", a[i]);
    }

    int *b = (int *)calloc(n, sizeof(int));

    for (int i = 1; i < n; i++)
    {
        b[i] = i + 1;
        printf("%d \n", b[i]);
    }
}