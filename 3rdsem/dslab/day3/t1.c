#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m = 3, n = 3;
    int **S = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        S[i] = (int *)malloc(n * sizeof(int));
    }
    printf("Enter 9 elements of the array: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &S[i][j]);
        }
    }

    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (S[i][j] != 0)
            {
                count++;
            }
        }
    }

    int **E = (int **)malloc(count * sizeof(int *));
    for (int i = 0; i < count; i++)
    {
        E[i] = (int *)malloc(3 * sizeof(int));
    }

    int k = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (S[i][j] != 0)
            {
                E[k][0] = S[i][j];
                E[k][1] = i;
                E[k][2] = j;
                k++;
            }
        }
    }
    printf("The entered array is: \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", S[i][j]);
        }
        printf("\n");
    }
    printf("The compact array is: \n");

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", E[i][j]);
        }
        printf("\n");
    }

    return 0;
}