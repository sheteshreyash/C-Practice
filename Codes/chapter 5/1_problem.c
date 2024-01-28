// Write a c program using functions to find average of three numbers :-

#include <stdio.h>

float calculateAverage(float num1, float num2, float num3)
{
    return (num1 + num2 + num3) / 3.0;
}

int main()
{
    float num1, num2, num3;
    printf("Enter three numbers: \n");
    scanf("%f %f %f", &num1, &num2, &num3);

    float average = calculateAverage(num1, num2, num3);
    printf("Average of %.2f, %.2f, and %.2f is: %.2f\n", num1, num2, num3, average);
    return 0;
}
