#include <stdio.h>
#include <stdlib.h>

void askQuestion(const char *question, const char *answer) {
    char userAnswer[100];
    printf("%s\n", question);
    fgets(userAnswer, sizeof(userAnswer), stdin);

    printf("You answered: %s", userAnswer);
    printf("Correct answer: %s\n", answer);
    printf("Wasn't that a silly question? Let's move on!\n\n");
}

int main() {
    printf("Welcome to the Silly Quiz Game!\n");
    printf("Answer the following questions and enjoy the fun answers!\n\n");

    askQuestion("What is the airspeed velocity of an unladen swallow?", "African or European?");
    askQuestion("If you were a fruit, what fruit would you be?", "A pineapple, of course!");
    askQuestion("Why is the sky blue?", "Because it loves to match the ocean.");
    askQuestion("What is the meaning of life?", "42. Duh.");
    askQuestion("If you could have any superpower, what would it be?", "The ability to talk to ducks.");

    printf("Thanks for playing the Silly Quiz Game! Hope you had a laugh!\n");

    return 0;
}
