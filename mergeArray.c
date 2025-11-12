#include <stdio.h>

void display_arr(int arr[], int size)
{
    printf("Array elements are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort_arr(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])   // ascending order
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void merge_arr(int arr1[], int arr2[], int arr3[], int size1, int size2)
{
    int i;
    for (i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int j = 0; j < size2; j++)
    {
        arr3[i] = arr2[j];
        i++;
    }
}

int main()
{
    int size1, size2, i, j;
    int arr1[10], arr2[10], arr3[20];

    printf("Enter the size of array1: ");
    scanf("%d", &size1);
    for (i = 0; i < size1; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of array2: ");
    scanf("%d", &size2);
    for (j = 0; j < size2; j++)
    {
        printf("Enter the %d element: ", j + 1);
        scanf("%d", &arr2[j]);
    }

    printf("\nSorted Array1:\n");
    sort_arr(arr1, size1);
    display_arr(arr1, size1);

    printf("\nSorted Array2:\n");
    sort_arr(arr2, size2);
    display_arr(arr2, size2);

    printf("\nMerged Array:\n");
    merge_arr(arr1, arr2, arr3, size1, size2);
    sort_arr(arr3, size1 + size2);
    display_arr(arr3, size1 + size2);

    return 0;
}
