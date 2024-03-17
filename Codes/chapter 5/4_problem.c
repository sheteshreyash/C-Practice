// write a program using recursion to calculate nth element of fibonacci series.

#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    printf("Enter the position (n) in the Fibonacci series: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative integer.\n");
        return 1; // Return an error code
    }

    int result = fibonacci(n);
    printf("The %dth element in the Fibonacci series is: %d\n", n, result);
    return 0;
}
