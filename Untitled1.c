#include<stdio.h>
#include<stdlib.h>
#define MAX_TRIES 3
int main()
{
    printf("Welcome the game!\n");
    printf("^Guess the Number^\n");
    printf("enter number (1 to 100)\n");
    printf("You have %d attempts to guess the number.\n", MAX_TRIES);

    int secret_number, guess ,attempts = 0;

    secret_number = 55;

while(attempts < MAX_TRIES)

        {
        printf("\nAttempt %d/%d: Enter your guess: ", attempts + 1, MAX_TRIES);
        scanf("%d", &guess);

        if (guess < secret_number)
            {
            printf("too low!\n");
        }
        else if (guess > secret_number)
            {
            printf("too high!\n");
        }
        else
         {
            printf("Congratulations! You guessed the correct number %d in %d attempts.\n", secret_number, attempts + 1);
            return;
        }

        attempts++;
    }
    printf("\nSorry, you've used all %d attempts. The correct number was %d.\n", MAX_TRIES, secret_number);

    return 0;

}
