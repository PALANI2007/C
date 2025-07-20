#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_TRIES 2


void display_instructions() {
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Your task is to guess the number in as few attempts as possible.\n");
    printf("You have %d attempts to guess the number.\n", MAX_TRIES);
}

void play_game() {
    int secret_number, guess, attempts = 0;

    secret_number = 90;

    while(attempts < MAX_TRIES)

        {
        printf("\nAttempt %d/%d: Enter your guess: ", attempts + 1, MAX_TRIES);
        scanf("%d", &guess);

        if (guess < secret_number)
            {
            printf("Your guess is too low!\n");
        }
        else if (guess > secret_number)
            {
            printf("Your guess is too high!\n");
        }
        else
         {
            printf("Congratulations! You guessed the correct number %d in %d attempts.\n", secret_number, attempts + 1);
            return; // End the game if the player guesses correctly
        }

        attempts++;
    }

    printf("\nSorry, you've used all %d attempts. The correct number was %d.\n", MAX_TRIES, secret_number);
}

int main()
{

    display_instructions();
    play_game();

    return 0;
}
