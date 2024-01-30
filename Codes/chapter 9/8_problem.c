// write a structure capable of storing date.
// write a function to compare the dates.

#include <stdio.h>

struct Date // Define a structure for a date
{
    int day;
    int month;
    int year;
};

int compareDates(struct Date date1, struct Date date2) // Function to compare two dates
{
    if (date1.year < date2.year)
        return -1;
    else if (date1.year > date2.year)
        return 1;

    if (date1.month < date2.month) // If the years are the same, compare the months
        return -1;
    else if (date1.month > date2.month)
        return 1;

    if (date1.day < date2.day) // If the years and months are the same, compare the days
        return -1;
    else if (date1.day > date2.day)
        return 1;

    return 0; // If all components are the same, the dates are equal
}

int main()
{
    struct Date date1, date2;

    printf("Enter date 1 (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter date 2 (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    int result = compareDates(date1, date2); // Compare the dates using the function

    if (result < 0)
        printf("Date 1 is earlier than Date 2\n");
    else if (result > 0)
        printf("Date 1 is later than Date 2\n");
    else
        printf("Date 1 is equal to Date 2\n");
    return 0;
}
