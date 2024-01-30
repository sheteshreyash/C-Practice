// write a program to generate multiplication table of a given number in text format.
// make sure that file is readable and well formatted.

#include <stdio.h>

void generate_multiplication_table(int number, const char *filename)
{
    FILE *file = fopen(filename, "w"); // Create and open a file in write mode

    if (file == NULL)
    {
        printf("Error opening file %s\n", filename);
        return;
    }

    fprintf(file, "Multiplication Table for %d\n", number);   //write header
    fprintf(file, "----------------------------\n");

    for (int i = 1; i <= 10; i++) // Write multiplication table
    {
        int result = number * i;
        fprintf(file, "%d x %d = %d\n", number, i, result);
    }

    fprintf(file, "----------------------------\n");
    fprintf(file, "Table generation complete!");
    fclose(file); // Close the file
}

int main()
{
    int tableNumber;
    printf("Enter the number for which you want to generate a multiplication table: ");
    scanf("%d", &tableNumber);

    if (tableNumber <= 0)
    {
        printf("Please enter a valid positive number.\n");
        return 1; // Exit with an error code
    }

    // Generate multiplication table for the entered number and save it to a file
    char filename[50]; // Assuming a reasonable maximum length for the filename
    snprintf(filename, sizeof(filename), "mult_table_%d.txt", tableNumber);
    generate_multiplication_table(tableNumber, filename);

    printf("Multiplication table for %d is created and saved to %s\n", tableNumber, filename);
    return 0;
}
