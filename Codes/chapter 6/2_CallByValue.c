// call by value in pointers in c

#include <stdio.h>

int sum(int a, int b) {
    int c;
    c = a + b;
    a = 783632;
    b = 234533;
    return c;
}

int main(int argc, char const *argv[])
{
    int a = 4, b = 7;
    printf("The value of 4+7 is %d \n", sum(a, b));

    return 0;
}
