// Write a program to print first n natural numbers using do while loop.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1, n;
    printf("Enter the number of natural numbers : \n");
    scanf("%d", &n);
    do
    {
        printf("The number is %d. \n", i);
        i++;
    } while (i<=n);
    return 0;
}
