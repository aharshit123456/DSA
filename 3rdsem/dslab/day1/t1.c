#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Program has started... \n");
    /* Case 1 */
    int(*a)[10] = malloc(sizeof(int[10]));

    /* Case 2 */
    int *b;
    int arr[10];
    b = &arr;

    printf("Case 1... \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", *(a)++);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", *a[i]);
    }

    printf("Case 2... \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d", b++);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", b[i]);
    }

    return 0;
}