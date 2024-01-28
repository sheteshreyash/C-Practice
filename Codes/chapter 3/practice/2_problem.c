// Calculate income tax paid by an employee to the govt as per the below slabs :-

//    income slab(in lakhs)          tax(in percentage)
//    2.5 - 5.0                        5
//    5.0 - 10.0                       20
//    above 10.0                       30

// Note that there is no tax below 2.5L.
// Take income amount as an input from the user.


#include <stdio.h>

int main(int argc, char const *argv[])
{
    float tax=0, income;
    printf("Enter your Income : \n");
    scanf("%f", &income);

    if((income >= 250000) && (income <= 500000)) {
        tax = tax + (0.05 *(income - 250000));
    }
    if ((income >= 500000) && (income <= 1000000)) {
        tax = tax + (0.20 *(income - 500000));
    }
    if ((income >= 1000000)) {
        tax = tax + (0.30 *(income - 1000000));
    }
    printf("Your Net income tax is %f \n", tax);
    return 0;
}
