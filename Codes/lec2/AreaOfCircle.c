// To calculate area of circle and modify it into area of Cylinder

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int r, h;
    printf("Enter Radius of Circle : ");
    scanf("%d", &r);
    printf("Enter Height of Cylinder : ");
    scanf("%d", &h);

    int area = r * r * 3.142;  // area of circle
    int cylinderArea = 3.142 * r * r * h;
    printf("Area of Circle is : %d", area);
    printf("\nVolume of Cylinder : %d", cylinderArea);


    return 0;
}


