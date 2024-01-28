#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age : \n");
    scanf("%d", &age);

    if(age <= 70 && age >= 18) {
        printf("You can drive \n");
    }
    else {
        printf("You cannot drive");
    }

    return 0;
}


// contains logical and conditional instructions