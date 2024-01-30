// write your own version of strcpy function from <string.h>

#include <stdio.h>

char *my_strcpy(char *dest, const char *src)
{
    char *originalDest = dest;

    while ((*dest++ = *src++) != '\0')
    { // Copy characters from src to dest until the null terminator is encountered
    }
    return originalDest;
}

int main()
{
    char source[] = "Hello shreyash";
    char destination[100];

    my_strcpy(destination, source);             // Copy the string using my_strcpy function
    printf("Copied string: %s\n", destination); // Print the copied string
    return 0;
}
