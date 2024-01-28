// Write a c program to calculate the sum of the numbers occurring
// in the multiplication table of given number from user at runtime.

#include <stdio.h>

int main()
{
    int number, i, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Multiplication Table for %d:\n", number);
    for (i = 1; i <= 10; i++)
    {
        int result = number * i;
        printf("%d x %d = %d\n", number, i, result);
        sum += result; // Accumulate the result in the sum variable
    }
    printf("Sum of the numbers in the multiplication table: %d\n", sum);
    return 0;
}
