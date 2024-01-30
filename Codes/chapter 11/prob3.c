// create an array dynamically capable of storing 5 elements.
// now use realloc() so that it can now store 10 elements.



// realloc deallocates the old object pointed to by ptr and returns a pointer to
// a new object that has the size specified by size. The contents of the new object
// is identical to that of the old object prior to deallocation, up to the lesser of the new and old sizes.
// Any bytes in the new object beyond the size of the old object have indeterminate values.

// The point to note is that realloc() should only be used for dynamically allocated memory.
// If the memory is not dynamically allocated, then behavior is undefined.



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr; // Declare a pointer to int
    arr = (int *)malloc(5 * sizeof(int)); // Dynamically allocate memory for an array of 5 integers

    if (arr == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Exit with an error code
    }
    printf("Original array size: %d elements\n", 5); // Display the original array size

    arr = (int *)realloc(arr, 10 * sizeof(int)); // Use realloc to resize the array to store 10 integers
    if (arr == NULL) // Check if reallocation was successful
    {
        fprintf(stderr, "Memory reallocation failed\n");
        return 1; // Exit with an error code
    }
    printf("New array size: %d elements\n", 10); // Display the new array size

    free(arr);
    return 0;
}
