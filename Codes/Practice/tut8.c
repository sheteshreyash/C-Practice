#include <stdio.h>
/*
   Print a multiplication table of a number entered by the user in pretty form
   eg : 
   
   Enter the number you want mult table of : 6

   table of 6 : 
*/
int main(int argc, char const *argv[])
{
    int i, n;
    printf("Enter the number do you want : ");
    scanf("%d", &n);
    printf("\nTable of %d", n);

    for (i = 0; i <= 10; i++)
    {
        printf("\n%d * %d = %d \n", n, i, n*i);
    }
    
    return 0;
}
