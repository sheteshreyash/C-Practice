// to find the area of rectangle

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int len, bred;
    printf("Enter length of Rectangle : ");
    scanf("%d", &len);

    printf("Enter Breadth of Rectangle : ");
    scanf("%d", &bred);

    int area = len * bred;
    printf("Area of Rectangle is : %d", area);
    return 0;
}
