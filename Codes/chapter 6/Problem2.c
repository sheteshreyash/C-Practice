// Write a program having a variable i. Print the address of i.
// Pass this variable to a function and print its address.
// Are these Addresses same? why?

#include <stdio.h>

void printAddress(int *ptr) {// Function to print the address of the passed variable
    printf("Address inside the function: %p\n", (void *)ptr);
}

int main()
{
    int i = 42;
    printf("Address in the main function: %p\n", (void *)&i); // Print the address of the variable in the main function
    printAddress(&i);
    return 0;
}

// The addresses will be the same because the function is receiving the address
// of the variable as an argument.When you pass the address of i to the function,
// it's the same memory location that i occupies. Therefore, the addresses will match.
