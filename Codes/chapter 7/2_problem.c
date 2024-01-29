// write a program to create an array of 10 integers and store multiplication table of 5 in it.

#include <stdio.h>

int main()
{
    int multiplicationTable[10];
    for (int i = 0; i < 10; i++)
    {
        multiplicationTable[i] = 5 * (i + 1);
    }
    printf("Multiplication Table of 5: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("5 x %d = %d\n", i + 1, multiplicationTable[i]);
    }
    return 0;
}
