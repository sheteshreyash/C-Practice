// write a c program to modify a file containing an integer to double its value

// prev file       new file
//     2               4


#include <stdio.h>

int main()
{
    FILE *file;
    int value;
    file = fopen("file.txt", "r+"); // Open the file in binary mode for reading and writing

    if (file == NULL)
    {
        perror("Error opening file");
        return 1; // Exit with an error code
    }

    fscanf(file, "%d", &value); // Read the integer from the file
    value *= 2; // Double the value
    fseek(file, 0, SEEK_SET); // Move the file pointer to the beginning
    fprintf(file, "%d", value); // Write the updated value back to the file

    fclose(file);
    printf("Previous file value: %d\n   New file value: %d\n", value / 2, value);
    return 0;
}