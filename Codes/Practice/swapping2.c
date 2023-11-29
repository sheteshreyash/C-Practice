    // c program to swap two numbers without using temp variable..

    #include <stdio.h>
    #include <stdlib.h>
    
    int main() {
    double a, b;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);

    // swapping

    a = a - b;   // a = (initial_a - initial_b)
    b = a + b;   // b = (initial_a - initial_b) + initial_b = initial_a 
    a = b - a;  // a = initial_a - (initial_a - initial_b) = initial_b
    
    printf("After swapping, a = %lf\n", a);
    printf("After swapping, b = %lf", b);

    return 0;
    }
