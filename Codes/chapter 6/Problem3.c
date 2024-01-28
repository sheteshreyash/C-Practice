// Write a program to change the value of a variable to ten times of its current value.
// Write a function and pass the value by reference.

#include <stdio.h>

void multiplyByTen(int *num) // Function to change the value of a variable to ten times of its current value
{
    *num = (*num) * 10;
}

int main()
{
    int myVariable = 5;
    printf("Original value: %d\n", myVariable);
    multiplyByTen(&myVariable);
    printf("New value: %d\n", myVariable);
    return 0;
}
