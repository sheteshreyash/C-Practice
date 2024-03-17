// write a program to read a text file character by character and write
// its content twice in a seperate file.


#include <stdio.h>

int main()
{
    FILE *inputFile, *outputFile; // File pointers for input and output files

    inputFile = fopen("input.txt", "r"); // Open the input file in read mode
    if (inputFile == NULL) // Check if the input file exists
    {
        perror("Error opening input file");
        return 1;
    }

    outputFile = fopen("output.txt", "w"); // Open the output file in write mode
    if (outputFile == NULL)   // Check if the output file is opened successfully
    {
        perror("Error opening output file");
        fclose(inputFile);
        return 2;
    }

    char line[1000]; // Read and write lines until the end of the file
    while (fgets(line, sizeof(line), inputFile) != NULL)
    {
        // Write the line twice to the output file
        fputs(line, outputFile);
        fputs(line, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);
    printf("Content written to output text file successfully.\n");
    return 0;
}
