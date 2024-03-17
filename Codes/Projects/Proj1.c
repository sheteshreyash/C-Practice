// Write a program that generates a random number and asks the player to guess it.
// If the player's guess is higher than the actual number, the program displays "Lower number please".
// similarly, if the user's guess is low, the program prints "higher number please".

// When the user guess the correct number, the program displays the number of guesses the player
// used to arrive at the number.
// (use loops)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generates a random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a random number between 1 and 100. Try to guess it!\n");

    // Keep running the loop until the number is guessed
    do
    {
        printf("Enter your guess (between 1 and 100): ");
        scanf("%d", &guess);

        if (guess < 1 || guess > 100)
        {
            printf("Please enter a number between 1 and 100.\n");
            continue; // Skip the rest of the loop and ask for input again
        }
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congratulations! You guessed it in %d attempts.\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    return 0;
}