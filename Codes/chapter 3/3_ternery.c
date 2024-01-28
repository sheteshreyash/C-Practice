#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number : \n");
    scanf("%d", &a);

    (a < 5) ? printf("%d is less than 5", a) : printf("%d is Greater than 5", a);
    return 0;
}
