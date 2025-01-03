#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("The program has started... \n");

    int *a[10];

    for (int i = 0; i < 10; i++)
    {
        int *ptr = malloc(sizeof(int));
        // *ptr = i;
        scanf("%d", ptr);
        // printf("%d", a[i]);
        a[i] = ptr;
        printf("address is: %x \n", &a[i]);
    }

    int max = *a[0];

    for (int i = 1; i < 10; i++)
    {
        if (*a[i] > max)
        {
            max = *a[i];
        }
    }

    printf("%d %d \n", max, &max);

    for (int i = 0; i < 10; i++)
    {
        free(a[i]);
    }

    return 0;
}
