// write a program to read three integers from a file in c

#include <stdio.h>

int main()
{
    FILE *file;
    int num1, num2, num3;
    file = fopen("input.txt", "r"); // Open the file for reading

    if (file == NULL) // Check if the file is opened successfully
    {
        printf("Error opening the file.\n");
        return 1; // Return non-zero to indicate an error
    }

    if (fscanf(file, "%d %d %d", &num1, &num2, &num3) == 3)
    {
        printf("first 3 integers from the file: %d, %d, %d\n", num1, num2, num3);
    }
    else
    {
        printf("Error reading integers from the file.\n");
    }
    fclose(file); // Close the file
    return 0;
}
