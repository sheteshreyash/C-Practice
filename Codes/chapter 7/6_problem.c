// Create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9 respectively.

#include <stdio.h>

int main() {
    int multiplicationTables[3][10]; // Create a 2D array of size 3x10

    for (int i = 0; i < 3; i++) {       // Fill the array with multiplication tables
        int multiplier;
        if (i == 0)
        { // Determine the multiplier based on the row index
            multiplier = 2;
        }
        else if (i == 1)
        {
            multiplier = 7;
        }
        else
        {
            multiplier = 9;
        }
        for (int j = 0; j < 10; j++)
        { // Fill the row with the multiplication table for the current multiplier
            multiplicationTables[i][j] = multiplier * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("Multiplication Table for %d:\n", (i == 0) ? 2 : (i == 1) ? 7 : 9);
        for (int j = 0; j < 10; j++) {
            printf("%d x %d = %d\n", (i == 0) ? 2 : (i == 1) ? 7 : 9, j + 1, multiplicationTables[i][j]);
        }
        printf("\n");
    }
    return 0;
}
