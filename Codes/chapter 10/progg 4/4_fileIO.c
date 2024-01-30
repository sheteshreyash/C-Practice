// take name and salary of two employees as input from user and write them to a text file in following format :

// name1, 34555
// name2, 77000

#include <stdio.h>

int main()
{
    char name1[50], name2[50];
    int salary1, salary2;

    printf("Enter the name of the first employee: ");
    scanf("%s", name1);
    printf("Enter the salary of %s: ", name1);
    scanf("%d", &salary1);

    printf("Enter the name of the second employee: ");
    scanf("%s", name2);
    printf("Enter the salary of %s: ", name2);
    scanf("%d", &salary2);
    FILE *file = fopen("employee_data.txt", "w"); // Open a file for writing

    if (file == NULL) // Check if the file opened successfully
    {
        printf("Error opening the file.\n");
        return 1; // Exit with an error code
    }

    fprintf(file, "%s, %d\n", name1, salary1);
    fprintf(file, "%s, %d\n", name2, salary2);

    fclose(file);
    printf("Employee information updated successfully to the file.\n");
    return 0;
}
