// Generate a number between 1 and 100. 
// Ask the user to guess until the number is found.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int askTheUser() {
    int userGuess;
    printf("Enter your guess: ");
    scanf("%d", &userGuess);
    return userGuess;
}

int main() {
    
    srand(time(NULL));

    int randomNumber = rand() % 100 + 1;
    int guess;

    do {
        guess = askTheUser();

        if (guess != randomNumber) {
            printf("Incorrect guess. Try again.\n");
        }

    } while (guess != randomNumber);

    printf("Congratulations! You guessed the number.\n");
    
    return 0;
}