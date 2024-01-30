// write a function slice() to slice a string. It should change the original
// string such that it is now the sliced string. take m and n as the start and 
// ending position for slice.

#include <stdio.h>
#include <string.h>

void slice(char str[], int m, int n)
{
    int len = strlen(str);
    if (m < 0 || n >= len || m > n) // Check if m and n are within valid bounds
    {
        printf("Invalid slice positions.\n");
        return;
    }
    int sliceLength = n - m + 1; // Calculate the length of the sliced string

    for (int i = 0; i < sliceLength; ++i) // Shift the characters to the left to remove the sliced portion
    {
        str[i] = str[m + i];
    }
    str[sliceLength] = '\0'; // Null-terminate the new string
}

int main()
{
    char originalString[100];
    printf("Enter a string: ");
    scanf("%s", originalString);

    int m, n;
    printf("Enter the starting position (m) for slice: ");
    scanf("%d", &m);

    printf("Enter the ending position (n) for slice: ");
    scanf("%d", &n);

    slice(originalString, m, n);
    printf("Sliced string: %s\n", originalString);
    return 0;
}
