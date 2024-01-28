// Write a program to find out whether a student is pass or fail;
// if it requires total 40% and atleast 33% in each subject to pass.
// Assume 3 subjects and take marks as an input from the user

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float sub1, sub2, sub3, total;
    printf("Enter the marks of subject 1 : \n");
    scanf("%f", &sub1);
    printf("Enter the marks of subject 2 : \n");
    scanf("%f", &sub2);
    printf("Enter the marks of subject 3 : \n");
    scanf("%f", &sub3);

    total = (sub1 + sub2 + sub3) / 3;
    if(total < 40) {
        printf("You are failed, Your total percentage is %f \n", total);
    }
    else if (sub1 < 33 || sub2 < 33 || sub3 < 33) {
        printf("You are failed in one of the subjects..Your total percentage is %f \n", total);
    }
    else {
        printf("You are passed, Your total percentage is %f \n", total);
    }
    return 0;
}
