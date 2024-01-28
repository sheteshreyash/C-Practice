// Write a program using a function which calculates the sum and average of two numbers.
// Use pointers and print the values of sum and average in main()

#include <stdio.h>

void calculateSumAndAverage(int num1, int num2, int *sum, float *average) // Function to calculate the sum and average of two numbers
{
    *sum = num1 + num2;
    *average = (float)(*sum) / 2; // Calculate average as sum divided by the number of values
}

int main()
{
    int number1 = 122, number2 = 78;
    int resultSum;
    float resultAverage;

    calculateSumAndAverage(number1, number2, &resultSum, &resultAverage);
    printf("Sum: %d\n", resultSum);
    printf("Average: %.2f\n", resultAverage);
    return 0;
}
