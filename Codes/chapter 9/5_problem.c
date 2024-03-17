// create an array of 5 complex numbers and display them with the help of display function.
// the values must be taken as an input from user.


#include <stdio.h>

struct ComplexNumber // Define a structure for a complex number
{
    double real;
    double imaginary;
};

void displayComplex(struct ComplexNumber num) // Function to display a complex number
{
    printf("%.2f + %.2fi\n", num.real, num.imaginary);
}

int main()
{
    struct ComplexNumber complexArray[5]; // Declare an array of 5 complex numbers

    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part of complex number %d: ", i + 1);
        scanf("%lf", &complexArray[i].real);

        printf("Enter imaginary part of complex number %d: ", i + 1);
        scanf("%lf", &complexArray[i].imaginary);
    }

    printf("\n 5 Complex Numbers:\n"); // Display each complex number using the display function
    for (int i = 0; i < 5; i++)
    {
        printf("Complex number %d: ", i + 1);
        displayComplex(complexArray[i]);
    }
    return 0;
}
