// write a c program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main()
{
    int number, i;
    int isPrime = 1; // Assume the number is prime initially

    printf("Enter a number: ");
    scanf("%d", &number);

    // Check for primality using a loop
    if (number <= 1)
    {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    }
    else
    {
        for (i = 2; i <= number / 2; i++)
        {
            if (number % i == 0)
            {
                isPrime = 0; // If the number is divisible, it's not prime
                break;
            }
        }
    }

    if (isPrime)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }
    return 0;
}
