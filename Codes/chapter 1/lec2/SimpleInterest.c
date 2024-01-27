// to calculate the simple interest using principle etc..

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("\nC program for simple interest ");

    double roi, princ, noYrs;
    printf("\nEnter Principle Amount : ");
    scanf("%lf", &princ);
    printf("\nEnter Rate of Interest : ");
    scanf("%lf", &roi);
    printf("\nEnter No of years : ");
    scanf("%lf", &noYrs);

    double sI = roi * princ * noYrs;
    printf("\nSimple Interest is : %lf", sI);
    return 0;
}
