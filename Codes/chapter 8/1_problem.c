// Write a program to take string as an input from user using %c and %s.
// Confirm that the strings are equal.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    // Input the first string using %s
    printf("Enter the first string: ");
    scanf("%s", str1);
    while (getchar() != '\n');

    // Input the second string using %c in a loop
    printf("Enter the second string : ");
    int i = 0;
    char c;
    while ((c = getchar()) != '\n')
    {
        str2[i++] = c;
    }
    str2[i] = '\0'; // Add null terminator to make it a valid string

    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    if (strcmp(str1, str2) == 0)
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are not equal.\n");
    }
    return 0;
}
