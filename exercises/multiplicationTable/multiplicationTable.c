#include <stdio.h>
#include "multiplicationTable.h"
/**
 * multiplication_table.c
 * Purpose: To print a multiplication table for a single digit provided by the user.
 */

/**
 * @brief Captures a single digit from the user.
 *
 * Prompts the user to enter a single digit and captures that input. The input is
 * expected to be a single digit (0-9). If the user enters an invalid digit or a
 * non-digit, the behavior is undefined as there is no input validation.
 *
 * @return The digit entered by the user as an integer.
 */
int getDigit() {
    int userInput;
    printf("Please enter a single digit: ");
    scanf("%d", &userInput);

    return userInput;
}

/**
 * @brief Prints the multiplication table for the given digit up to 10.
 *
 * Takes a single digit as input and prints its multiplication table from 1 to 10.
 * Each line of the table is of the form 'i * digit = result'.
 *
 * @param digit The single digit for which the multiplication table is printed.
 */
void printTable(int digit) {

    for(int i= 1; i <= 10; i++) {
        printf("%d * %d = %d\n", i, digit, i * digit);
    }
}

/**
 * @brief Orchestrates the multiplication table printing.
 *
 * Coordinates the process of obtaining a single digit from the user and
 * then printing the multiplication table for that digit. It calls `getDigit()`
 * to get the user's input and then `printTable()` to print the table.
 */
void multiplicationTable() {
    int digit = getDigit();
    printTable(digit);
}

/**
 * TODO: This program does not handle erroneous non-numeric input or numbers outside
 *       the range of single digits. It assumes the user will input a single digit (0-9).
 */

