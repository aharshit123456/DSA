/**
 * Title: Sorting Algorithms
 * bubble, insertion, selection, merge, quick, heap sort
 **/
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubble_sort(int *arr, int n)
{
    int count = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
            flag = 1;
            count++;
        }
    }
}

void insertion_sort(int *arr, int n)
{
    int count = 0;
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;

        printf("%d", key);
        // this loop block iterates over the left side of the current element to push them all one step forward while storing current element in key
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            count++;
            print_array(arr, n);
        }
        printf("\n");
        arr[j + 1] = key;
        printf("\n");
    }
    printf("The number of swaps are: %d\n", count);
    printf("\n");
}

void merge_sort(int *arr, int n)
{
    if (n > 1)
    {
        int mid = n / 2;
        int *left = (int *)malloc(sizeof(int) * mid);
        int *right = (int *)malloc(sizeof(int) * (n - mid));

        // copying the elements to the left and right arrays
        for (int i = 0; i < mid; i++)
        {
            left[i] = arr[i];
        }

        for (int i = mid; i < n; i++)
        {
            right[i - mid] = arr[i];
        }

        print_array(arr, n);

        merge_sort(left, mid);
        merge_sort(right, n - mid);

        // merging the left and right arrays
        int i = 0, j = 0, k = 0;
        while (i < mid && j < n - mid)
        {
            if (left[i] < right[j])
            {
                arr[k] = left[i];
                i++;
            }
            else
            {
                arr[k] = right[j];
                j++;
            }
            k++;
        }

        // copying the remaining elements
        while (i < mid)
        {
            arr[k] = left[i];
            i++;
            k++;
        }

        while (j < n - mid)
        {
            arr[k] = right[j];
            j++;
            k++;
        }
    }
}

void quick_sort(int *arr, int n)
{
    if (n > 1)
    {
        int pivot = arr[n - 1];
        int i = 0;

        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] < pivot)
            {
                swap(&arr[i], &arr[j]);
                i++;
                printf("swapping \n");
            }
            print_array(arr, n);
        }
        swap(&arr[i], &arr[n - 1]);
        quick_sort(arr, i);
        quick_sort(arr + i + 1, n - i - 1);
    }
}

void heapify(int *arr, int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heap_sort(int *arr, int n)
{
    // heapify the array
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    // extract elements from the heap
    for (int i = n - 1; i > 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void selection_sort(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            count++;
        }
        swap(&arr[i], &arr[min]);
    }
    printf("The number of swaps are: %d\n", count);
    printf("\n");
}
/*
5 4 3 2 1


*/

int main()
{

    printf("Enter the number of elements in the array:");
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    printf("Enter the elements of the array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // bubble_sort(arr, n);
    // insertion_sort(arr, n);
    // merge_sort(arr, n);
    // quick_sort(arr, n);
    heap_sort(arr, n);
    printf("The elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}