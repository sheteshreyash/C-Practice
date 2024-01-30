// write your own version of strlen function from <string.h>

#include <stdio.h>

size_t my_strlen(const char *str)
{
    const char *s = str;
    while (*s)
        ++s;
    return s - str;
}

int main()
{
    char userString[100];
    printf("Enter a string: ");
    scanf("%s", userString);

    printf("String : %s\n", userString);
    size_t length = my_strlen(userString); // Calculate and print the length using my_strlen function
    printf("Length of the string: %zu\n", length);
    return 0;
}
