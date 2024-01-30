// write a program to dynamically create an array of size 6 capable of storing 6 integers.
// solve the above problem using calloc()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    arr = (int *)calloc(6, sizeof(int));

    if (arr == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Exit with an error code
    }

    printf("Enter 6 integers:\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}


// In summary, while both malloc and calloc allocate memory dynamically,
// the key difference lies in the initialization of the allocated memory.
// calloc provides zero - initialized memory, whereas malloc leaves
//  the content of the allocated memory uninitialized.


// Initialization:
// malloc: It stands for "memory allocation."
// It allocates a specified number of bytes of memory but does not initialize
// the content of the allocated memory. The values in the allocated memory block
// are undetermined and may contain garbage values.

// calloc: It stands for "contiguous allocation."
// It also allocates a specified number of bytes of memory, like malloc,
// but it initializes the content of the allocated memory to zero.


// Number of Arguments:
// malloc: Takes a single argument specifying the number of bytes to allocate.
// calloc: Takes two arguments, the number of elements to allocate and the size of each element in bytes.
// The total memory allocated is the product of these two values.

// Usage:
// malloc is commonly used when you need to allocate a block of memory
// and don't necessarily need the content to be initialized.
// You might manually initialize the memory if required.
// calloc is often used when you want to ensure that the allocated memory is initialized to zero.
// This is particularly useful when dealing with arrays or structures where you want all
// elements to start with a known value (zero in this case).