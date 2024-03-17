// Array is a collection of similar items/objects

// Create an Array of 10 numbers. Verify using pointer arithmetic that (ptr + 2) points to the
// third element where ptr is a pointer pointing to the first element of the array.

#include <stdio.h>

int main()
{
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = &numbers[0]; // Create a pointer pointing to the first element of the array

    // Verify using pointer arithmetic that (ptr + 2) points to the third element
    if ((ptr + 2) == &numbers[2])
    {
        printf("(ptr + 2) points to the third element of the array.\n");
    }
    else
    {
        printf("(ptr + 2) does not point to the third element of the array.\n");
    }
    return 0;
}
