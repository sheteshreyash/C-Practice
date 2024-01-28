// loops are used to repeat the similar part of code snippet efficiently.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter value : \n");
    scanf("%d", &a);

    while (a<10)
    {
        printf("%d \n", a);
        a++;
    }
    return 0;
}


// Just like while loop, do while loop also exists---> It executes the code and then checks the condition
// do
// {
//     /* code */
// } while (/* condition */);


