// Write a program to find whether a year entered by the user is leap year or not.
// Take year as an input from the user.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int year;
    printf("Enter year (4 digit value) : \n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100!= 0 || year % 400 == 0) {
        printf("%d is a leap year. \n", year);
    }
    else {
        printf("%d is not a leap year. \n", year);
    }
    return 0;
}
