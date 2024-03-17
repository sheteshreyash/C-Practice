// Write a program to print the value of a variable i by using
// "pointer to pointer" type of variable.

#include <stdio.h>

int main()
{
    int i;
    printf("Enter value of variable i : \n");
    scanf("%d", &i);
    int *pointer;
    int **pointerToPointer; // Declare a pointer to pointer

    pointer = &i; // Assign the address of the variable to the pointer
    pointerToPointer = &pointer; // Assign the address of the pointer to pointer to pointer

    printf("Value of i using pointer : %d\n", *pointer);
    printf("Value of i using pointer to pointer: %d\n", **pointerToPointer); // Print the value using the pointer to pointer
    return 0;
}
