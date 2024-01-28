// C program to understand call by reference

#include <stdio.h>

int swap(int *a, int *b) {  // this function will work
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int WrongSwap(int a, int b) {   // this function will not work
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(int argc, char const *argv[])
{
    int x = 3, y = 4;
    printf("Value of x and y before swap is %d and %d \n", x, y);

    WrongSwap(x, y);  // call by value(sending copy of x and y to the main function)
    printf("Value of x and y after wrong swap is %d and %d \n", x, y);

    swap(&x, &y);   // call by reference(sending address of x and y to the main function)
    printf("Value of x and y after swap is %d and %d \n", x, y);
    return 0;
}
