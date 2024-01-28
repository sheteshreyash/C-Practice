#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter the number : \n");
    scanf("%d", &a);

    if(a%2 == 0) {
        printf("%d is Even number \n", a);
    }
    else {
        printf("%d is odd number \n", a);
    }
    return 0;
}
