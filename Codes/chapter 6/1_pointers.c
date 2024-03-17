// first program for pointers

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 8;
    int *j = &i;

    printf("Add i = %u \n", &i);
    printf("Add i = %u \n", j);
    printf("Add j = %u \n", &j);
    printf("Value i = %d \n", i);
    printf("Value i = %d \n", *(&i));
    printf("Value i = %d \n", *j);
    return 0;
}

// %u is format specifier for printing pointers address