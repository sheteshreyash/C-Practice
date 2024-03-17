#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 4, b, c; // declarations
    b = c = a;
    printf("value of a is %d\n", a);
    printf("value of b is %d\n", b);
    printf("value of c is %d\n", c);
    return 0;
}


// There is no operator to perform exponentiation in c
// we use bitwise or operator to perform exponentiation


// However type conversion is the most important part of c programming
// 5/2 will be always 2 but 5.0/2 will be 2.5


// OPERATOR PRECEDENCE
// 1st -> * / % ,     2nd -> + - ,     3rd -> =
