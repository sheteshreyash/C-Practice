// Write a C program to print the address of a variable.
// use this address to get the value of this variable.

#include <stdio.h>

int main()
{
    int myVariable = 42;

    printf("Address of myVariable: %p\n", (void *)&myVariable); // Print the address of the variable

    // Use the address to get the value of the variable
    int *addressPointer = &myVariable;
    int valueAtAddress = *addressPointer;

    printf("Value at the address: %d\n", valueAtAddress); // Print the value obtained from the address
    return 0;
}
