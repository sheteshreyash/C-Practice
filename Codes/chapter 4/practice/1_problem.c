// Write a program to print multiplication table of a given number

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : \n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}
