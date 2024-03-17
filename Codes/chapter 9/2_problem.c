// write a function sumVector which returns the sum of two vectors passed to it.
// The vectors must be two dimensional. use of structures is appreciated.

#include <stdio.h>

struct Vector2D // Define a structure for a 2D vector
{
    float x;
    float y;
};

struct Vector2D sumVector(struct Vector2D v1, struct Vector2D v2) // Function to compute the sum of two 2D vectors
{
    struct Vector2D result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{
    struct Vector2D vector1, vector2; // Declare two 2D vectors

    printf("Enter the value for vector1.x: ");
    scanf("%f", &vector1.x);

    printf("Enter the value for vector1.y: ");
    scanf("%f", &vector1.y);

    printf("Enter the value for vector2.x: ");
    scanf("%f", &vector2.x);

    printf("Enter the value for vector2.y: ");
    scanf("%f", &vector2.y);

    struct Vector2D resultVector = sumVector(vector1, vector2); // Compute the sum of the vectors
    printf("Sum of vectors: x = %.2f, y = %.2f\n", resultVector.x, resultVector.y);
    return 0;
}
