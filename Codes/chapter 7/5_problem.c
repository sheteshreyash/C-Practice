// write a program containing functions which counts the number of positive integers in an array.

#include <stdio.h>

int countPositiveIntegers(int arr[], int size) // Function to count the number of positive integers in an array
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int positiveCount = countPositiveIntegers(arr, size);
    printf("\nNumber of positive integers in the array: %d\n", positiveCount);
    return 0;
}
