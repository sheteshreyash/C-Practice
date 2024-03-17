// write a program to illustrate the use of arrow -> operator in c

// The arrow -> operator in C is used to access members of a structure or union through a pointer.


#include <stdio.h>

struct Student
{
    char name[50];
    int age;
};

int main()
{
    struct Student student;   // declare the structure
    struct Student *studentPtr; // Declare a pointer to a structure
    studentPtr = &student; // Initialize the pointer to point to the structure

    printf("Enter student name: ");
    scanf("%s", studentPtr->name);

    printf("Enter student age: ");
    scanf("%d", &(studentPtr->age));

    printf("\nStudent Information:\n");
    printf("Name: %s\n", studentPtr->name);
    printf("Age: %d\n", studentPtr->age);

    return 0;
}
