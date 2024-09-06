#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void setZeroes(int **matrix, int matrixSize, int *matrixColSize)
{
    int arr1[20][2];
    int counter = 0;
    int rowSize = matrixSize / (*matrixColSize);

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < *matrixColSize; j++)
        {
            if (matrix[i][j] == 0)
            {
                arr1[counter][0] = i;
                arr1[counter][1] = j;
                counter++;
            }
        }
    }

    for (int k = 0; k < counter; k++)
    {
        for (int i = 0; i < *matrixColSize; i++)
        {
            matrix[arr1[k][0]][i] = 0;
        }
        for (int i = 0; i < rowSize; i++)
        {
            matrix[i][arr1[k][1]] = 0;
        }
    }
}

void nextPermutation(int *nums, int numsSize)
{
}

// int reverse(int x)
// {

//     long long int temp = x;
//     int count = 0;
//     if (x < 0)
//     {
//         temp *= -1;
//     }
//     while (temp > 0)
//     {
//         temp = temp / 10;
//         count++;
//     }
//     long long int reversed = 0;
//     if (sizeof(x) > 4 * sizeof(int))
//     {
//         printf("Size of x is greater than 4 bytes \n");
//         return 0;
//     }
//     else if (x == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         printf("%d \n", x);
//         int i = pow(10, count - 1);
//         temp = x;
//         printf("%d \n", i);
//         int digit = 0;
//         // int isNeg = 0;
//         if (x < 0)
//         {
//             temp *= -1;
//         }

//         while (temp > 0)
//         {
//             digit = temp % 10;
//             printf("Digit : %d \n", digit);
//             reversed = reversed + i * digit;
//             if (sizeof(reversed) > 32)
//             {
//                 return 0;
//             }
//             temp = temp / 10;
//             i /= 10;
//             // printf("Reversed : %d \n", reversed);
//         }
//         if (x < 0)
//         {
//             reversed *= -1;
//         }
//         return reversed;
//     }
// }

#include <limits.h>

int reverse(int x)
{
    int reversed = 0;
    while (x != 0)
    {
        int digit = x % 10;
        x /= 10;

        // Check for overflow before multiplying by 10 and adding the digit
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7))
        {
            return 0; // Overflow condition for positive numbers
        }
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8))
        {
            return 0; // Overflow condition for negative numbers
        }

        reversed = reversed * 10 + digit;
    }
    return reversed;
}

void main()
{

    // printf("HELLO \n");
    // printf("Reversed : %d \n", reverse(-123));
    // printf("Reversed : %d \n", reverse(123));
    // printf("Reversed : %d \n", reverse(120));

    /*
        int arr[3][3] = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
        int **matrix = (int **)malloc(3 * sizeof(int *));

        for (int i = 0; i < 3; i++)
        {
            matrix[i] = (int *)malloc(3 * sizeof(int));
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matrix[i][j] = arr[i][j];
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
        int colSize = 3;
        setZeroes(matrix, 9, &colSize);

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
        */
}