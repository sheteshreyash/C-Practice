    // c program to find the size of the variable
    #include <stdio.h>

    int main(int argc, char const *argv[])
    {
        int ch = 0;

        do {
            printf("\n----C program to find the size of the variable---");
            printf("\n1 - Integer\n2 - Double\n3 - Float\n4 - Character");
            printf("\nEnter your choice : (-1 to exit program)");
            scanf("%d", &ch);

            switch (ch)
            {
            case 1 :
            printf("Size of integer is : \n");
            printf("%lu", sizeof(int));
            break;
            case 2 :
            printf("\nSize of Double is : \n");
            printf("%lu", sizeof(double));
            break;
            case 3 :
            printf("\nSize of Float is : \n");
            printf("%lu", sizeof(float));
            break;
            case 4 :
            printf("\nSize of Character is : \n");
            printf("%lu", sizeof(char));
            break;
            default:
            printf("\nInvalid choice !!");
            break;
            }
            printf("\nDo you want to continue ? press 1 \n");
            scanf("%d", &ch);

        }while(ch == 1);
        printf("Thank you...");
        return 0;
    }
