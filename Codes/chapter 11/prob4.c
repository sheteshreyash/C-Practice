// create an array dynamically capable of storing 5 elements.
// now use calloc() so that it can now store 10 elements.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *dynamicArray = (int *)calloc(5, sizeof(int)); // Create an array dynamically capable of storing 5 elements
    if (dynamicArray == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Print the original array
    printf("Original array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    int *resizedArray = (int *)realloc(dynamicArray, 10 * sizeof(int)); // Resize the array to store 10 elements
    if (resizedArray == NULL)
    {
        fprintf(stderr, "Memory reallocation failed.\n");
        free(dynamicArray); // Free the memory allocated before
        return 1;           // Exit with an error code
    }

    for (int i = 5; i < 10; i++)
    {
        resizedArray[i] = 0; // You can initialize to any default value
    }

    printf("Resized array elements:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", resizedArray[i]);
    }
    printf("\n");

    free(resizedArray);
    return 0;
}



// A calloc() function is a predefined library function that stands for contiguous memory allocation.
// A calloc() function is used to create multiple blocks at the run time of a program having the same
// size in the memory.
// A calloc function is defined inside the stdlib.h header file.
// It has two parameters, no. of blocks and the size of each block.
// When the dynamic memory is allocated using the calloc() function,
// it returns the base address of the first block, and each block is initialized with 0.
// And if memory is not created, it returns a NULL pointer.

// For example, suppose we want to create three blocks of memory using the calloc() function,
// we need to pass two parameters, a number of blocks (3) and
// the size of each block (int, char, float, etc.) in the byte.
// In this way, it creates three blocks whose size is the same inside the computer memory.