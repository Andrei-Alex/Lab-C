#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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
    char input[10];
    long userGuess;
    char *endPtr;


    printf("Enter your guess: ");

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


void guessTheNumber() {

    srand(time(NULL));

    int randomNumber = rand() % 10 + 1;
    int guess;

    do {
        guess = askTheUser();

        if (guess != randomNumber) {
            printf("Incorrect guess. Try again.\n");
        }

    } while (guess != randomNumber);

    printf("Congratulations! You guessed the number.\n");

}
