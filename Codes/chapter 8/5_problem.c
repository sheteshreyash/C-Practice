// write a program to encrypt a string by adding 1 to the ascii value of its characters.

#include <stdio.h>

void encryptString(char *str)
{
    while (*str != '\0')
    {
        *str = *str + 1;
        str++;
    }
}

int main()
{
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);

    encryptString(inputString); // Encrypt the string
    printf("Encrypted string: %s\n", inputString);
    return 0;
}
