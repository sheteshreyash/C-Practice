// write a program to calculate the occurance of a given character in a string.

#include <stdio.h>

int countOccurrence(const char *str, char target)
{
    int count = 0;
    while (*str != '\0')
    {
        if (*str == target)
        {
            count++;
        }
        str++;
    }
    return count;
}

int main()
{
    char inputString[100];
    char targetChar;

    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Enter the character to count: ");
    scanf(" %c", &targetChar); // Notice the space before %c to consume the newline character

    int occurrence = countOccurrence(inputString, targetChar);
    printf("Occurrence of '%c' in the string is : %d\n", targetChar, occurrence);
    return 0;
}
