// Write a program using function to print the following pattern (first n lines)

// *
// * * *
// * * * * *



#include <stdio.h>

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Print '*' in a pattern
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the no of rows: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Please enter a positive integer.\n");
        return 1; // Return an error code
    }
    printPattern(n);
    return 0;
}
