// write a program with a structure representing a complex number

#include <stdio.h>

struct ComplexNumber // Define a structure for a complex number
{
    double real;
    double imaginary;
};

struct ComplexNumber addComplex(struct ComplexNumber num1, struct ComplexNumber num2) // Function to add two complex numbers
{
    struct ComplexNumber result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

int main()
{
    struct ComplexNumber complex1, complex2; // Declare two complex numbers

    printf("Enter real part of complex number 1: ");
    scanf("%lf", &complex1.real);

    printf("Enter imaginary part of complex number 1: ");
    scanf("%lf", &complex1.imaginary);

    printf("Enter real part of complex number 2: ");
    scanf("%lf", &complex2.real);

    printf("Enter imaginary part of complex number 2: ");
    scanf("%lf", &complex2.imaginary);

    struct ComplexNumber result = addComplex(complex1, complex2); // Add the complex numbers
    printf("\nResult of addition: %.2f + %.2fi\n", result.real, result.imaginary);
    return 0;
}
