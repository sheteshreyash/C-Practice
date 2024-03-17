// create an array of multiplication table of 7 upto 10 (7 x 10 = 70).
// use realloc to make it store it 15 elements (7x1 to 7x15)



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *multiplicationTable = (int *)malloc(10 * sizeof(int));
    if (multiplicationTable == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 10; ++i) // Populate the array with the multiplication table values
    {
        multiplicationTable[i] = 7 * (i + 1);
    }

    printf("Original Multiplication Table of 7:\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("7 x %d = %d\n", i + 1, multiplicationTable[i]);
    }

    multiplicationTable = (int *)realloc(multiplicationTable, 15 * sizeof(int));
    if (multiplicationTable == NULL) // Check if realloc is successful
    {
        fprintf(stderr, "Memory reallocation failed\n");
        free(multiplicationTable); // Free the original memory
        return 1;
    }

    for (int i = 10; i < 15; ++i) // extended part of array with additional multiplication table values
    {
        multiplicationTable[i] = 7 * (i + 1);
    }

    printf("\nExtended Multiplication Table of 7:\n");
    for (int i = 0; i < 15; ++i)
    {
        printf("7 x %d = %d\n", i + 1, multiplicationTable[i]);
    }

    free(multiplicationTable);
    return 0;
}
