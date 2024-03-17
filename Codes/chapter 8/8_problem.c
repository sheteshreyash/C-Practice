// write a program to check whether a given character is present in a string or not.

#include <stdio.h>

int isCharacterPresent(const char *str, char target)
{
    while (*str != '\0')
    {
        if (*str == target)
        {
            return 1; // Character is present
        }
        str++;
    }
    return 0; // Character is not present
}

int main()
{
    char inputString[100];
    char targetChar;

    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Enter the character to check: ");
    scanf(" %c", &targetChar); // Notice the space before %c to consume the newline character

    if (isCharacterPresent(inputString, targetChar))
    {
        printf("'%c' is present in the string.\n", targetChar);
    }
    else
    {
        printf("'%c' is not present in the string.\n", targetChar);
    }
    return 0;
}
