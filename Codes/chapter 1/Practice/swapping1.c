// c program to swap two numbers using temp variable..

    #include <stdio.h>
    #include <stdlib.h>

    int main() {
    double first, second, temp;
    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter second number: ");
    scanf("%lf", &second);

    temp = first;  // value of first is assigned to temp
    first = second;   // value of second is assigned to first
    second = temp;  // value of temp (initial value of first) is assigned to second

    printf("\nAfter swapping, first number = %lf\n", first); // %.2lf displays number up to 2 decimal points
    printf("After swapping, second number = %lf", second);
    return 0;
    }
