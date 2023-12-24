/**
 * @file utils.c
 * @brief Utility functions for validating input and running selected functions based on user choice.
 *
 * This file contains definitions for utility functions used throughout the application.
 * It includes a function to validate integer inputs and another to trigger functions
 * corresponding to user choices. These functions aid in managing user input and 
 * processing application logic.
 */

#include "helpers.h"
#include <stdlib.h>

/**
 * @brief Checks if a given string represents a valid integer.
 *
 * This function attempts to convert a string to an integer using strtol.
 * It validates the conversion process to ensure the entire string can be
 * represented as an integer.
 *
 * @param str The string to validate as an integer.
 * @return int Returns 1 if the string is a valid integer, 0 otherwise.
 */
int isValidNumber(const char *input) {
    long userGuess;
    char *endPtr;

    errno = 0;
    userGuess = strtol(input, &endPtr, 10);

    if (endPtr == input || (*endPtr != '\n' && *endPtr != '\0')) {
        return -1; // No digits were found or string contains extra characters
    } else if (errno == ERANGE || userGuess > INT_MAX || userGuess < INT_MIN) {
        return -1; // Value out of range
    }
    return (int)userGuess;
}

/**
 * @brief Executes a function based on the given choice.
 *
 * This is a placeholder function to demonstrate running different functions
 * based on user input or other criteria. It currently prints the choice to 
 * the standard output.
 *
 * @param choice The user's choice determining which function to run.
 */
void runSelectedFunction(int choice) {
    // Implementation should be updated to call specific functions based on 'choice'
    printf("Running function for choice: %d\n", choice);
}
