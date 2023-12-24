#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <errno.h>
#include <limits.h>
#include "guessTheNumber.h"

/**
 * guessTheNumber.c
 * Purpose: Number guessing game where the user tries to guess a randomly generated number.
 */

/**
 * @brief Asks the user to enter a guess and returns the input as an integer.
 *
 * The function prompts the user to enter a guess and reads the input from the
 * standard input. If the input is not a valid number or it is out of the range
 * for an integer, an error message is printed and -1 is returned.
 *
 * @return The user's guess as an integer, or -1 if an error occurred.
 *
 * @note This function assumes that the input buffer is large enough to hold
 *       the user's input. Otherwise, a buffer overflow may occur.
 * @note The function modifies the global variable `errno` and the input buffer `input`.
 */
int askTheUser() {
    char input[MAX_INPUT_LENGTH];
    long userGuess;
    char *endPtr;

    printf("Enter your guess (1-10): ");

    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Error reading input.\n");
        return -1;
    }

    errno = 0;
    userGuess = strtol(input, &endPtr, 10);

    if (endPtr == input) {
        printf("No numeric input was found. Please enter a valid number.\n");
        return -1;
    } else if (*endPtr != '\n' && *endPtr != '\0') {
        printf("Partial or invalid input. Please enter a whole number.\n");
        return -1;
    } else if (errno == ERANGE || userGuess > INT_MAX || userGuess < INT_MIN) {
        printf("Number out of range for int.\n");
        return -1;
    }
    return (int)userGuess;
}

/**
 * @brief Main logic for the number guessing game.
 *
 * This function generates a random number between 1 and 10 and prompts the user
 * to guess the number. It uses a loop to continue asking the user for a guess until
 * the correct number is guessed.
 */
void guessTheNumber() {
    srand(time(NULL)); // Seed the random number generator with the current time

    int randomNumber = rand() % MAX_NUMBER + 1;
    int guess;

    do {
        guess = askTheUser();

        if (guess == -1) { // Check for input error
            continue; // Skip to the next iteration
        }

        if (guess != randomNumber) {
            printf("Incorrect guess. Try again.\n");
        }

    } while (guess != randomNumber);

    printf("Congratulations! You guessed the number %d.\n", randomNumber);
}

