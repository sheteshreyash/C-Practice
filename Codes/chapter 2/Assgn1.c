// Write a program to check whether the given number is divisible by 97 or not

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter the number to check: \n");
    int n;
    scanf("%d", &n);
    if(n % 97 == 0) {
        printf("%d is divisible by 97 \n", n);
    }
    else {
        printf("%d is not divisible by 97 \n", n);
    }
    return 0;
}
