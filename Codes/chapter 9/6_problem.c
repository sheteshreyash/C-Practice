// write a program with a structure representing a complex number
// write the structure using typedef keyword.

#include <stdio.h>

typedef struct // Define a structure for a complex number using typedef
{
    double real;
    double imaginary;
} ComplexNumber;

ComplexNumber addComplex(ComplexNumber num1, ComplexNumber num2) // Function to add two complex numbers
{
    ComplexNumber result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

int main()
{
    ComplexNumber complex1, complex2; // Declare two complex numbers

    printf("Enter real part of complex number 1: ");
    scanf("%lf", &complex1.real);

    printf("Enter imaginary part of complex number 1: ");
    scanf("%lf", &complex1.imaginary);

    printf("Enter real part of complex number 2: ");
    scanf("%lf", &complex2.real);

    printf("Enter imaginary part of complex number 2: ");
    scanf("%lf", &complex2.imaginary);

    ComplexNumber result = addComplex(complex1, complex2);
    printf("\nResult of addition: %.2f + %.2fi\n", result.real, result.imaginary);
    return 0;
}
