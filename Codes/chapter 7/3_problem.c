#include <stdio.h>

int main()
{
    int table;
    printf("Enter the multiplication table you want to print: ");
    scanf("%d", &table);
    int multiplicationTable[10];

    for (int i = 0; i < 10; i++)
    {
        multiplicationTable[i] = table * (i + 1);
    }

    // Print the multiplication table stored in the array
    printf("Multiplication Table of %d:\n", table);
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", table, i + 1, multiplicationTable[i]);
    }
    return 0;
}
