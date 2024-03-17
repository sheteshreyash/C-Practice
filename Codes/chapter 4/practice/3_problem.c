// write a c program to calculate the factorial of a given number using for loops

#include <stdio.h>

int main()
{
    int number;
    unsigned long long factorial = 1; // Use long long to handle larger factorials
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        for (int i = 1; i <= number; i++)
        {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", number, factorial);
    }
    return 0;
}
