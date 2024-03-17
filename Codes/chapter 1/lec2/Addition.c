// to find the addition of 2 numbers

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter no a : \n");
    scanf("%d", &a);

    printf("Enter no b : \n");
    scanf("%d", &b);

    int add = a + b;
    printf("Addition is : %d", add);
    return 0;
}
