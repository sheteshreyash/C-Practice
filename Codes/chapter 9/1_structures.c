// Create a two dimensional vector using structures in c

#include <stdio.h>

struct Vector2D // Define a structure for a 2D vector
{
    float x;
    float y;
};

int main()
{
    struct Vector2D myVector;

    printf("Enter the value for x: ");
    scanf("%f", &myVector.x);

    printf("Enter the value for y: ");
    scanf("%f", &myVector.y);

    printf("Vector components: x = %.2f, y = %.2f\n", myVector.x, myVector.y);
    return 0;
}
