// write a recursive function to calculate the sum of first n natural numbers

#include <stdio.h>

int sumOfNaturalNumbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative integer.\n");
        return 1; // Return an error code
    }

    int sum = sumOfNaturalNumbers(n);
    printf("The sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}
