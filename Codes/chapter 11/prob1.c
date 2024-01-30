// write a program to dynamically create an array of size 6 capable of storing 6 integers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr; // Declare a pointer to int
    arr = (int *)malloc(6 * sizeof(int)); // Dynamically allocate memory for an array of 6 integers

    if (arr == NULL) // Check if memory allocation was successful
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Exit with an error code
    }

    printf("Enter 6 integers :\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements : ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr); // Free the dynamically allocated memory
    return 0;
}
