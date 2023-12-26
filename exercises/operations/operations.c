#include <stdio.h>
#include "operations.h"

int inputs[2];

/**
 * @brief Asks for a numerical input from the user.
 *
 * Prompts the user with a given message and reads a single integer input from the standard input.
 * The input is then returned to the calling function.
 *
 * @param str The message to be displayed as a prompt to the user.
 * @return The integer input by the user.
 */
int askForInput(char str[]) {
    int number;
    printf("%s\n", str);
    scanf("%d", &number);
    return number;
}

/**
 * @brief Computes and prints the sum of two integers.
 *
 * Takes an array of two integers and computes their sum. The result is printed to the standard output.
 *
 * @param inputs An array of two integers to be summed.
 */
void sum(int inputs[]) {
    int result = inputs[0] + inputs[1];
    printf("The sum of %d and %d is : %d\n", inputs[0], inputs[1], result);
}

/**
 * @brief Computes and prints the difference of two integers.
 *
 * Takes an array of two integers and computes the difference between the first and the second. The result is printed to the standard output.
 *
 * @param inputs An array of two integers to be subtracted.
 */
void substraction(int inputs[]) {
    int result = inputs[0] - inputs[1];
    printf("The substraction of %d and %d is : %d\n", inputs[0], inputs[1], result);
}

/**
 * @brief Computes and prints the product of two integers.
 *
 * Takes an array of two integers and computes their product. The result is printed to the standard output.
 *
 * @param inputs An array of two integers to be multiplied.
 */
void multiplication(int inputs[]) {
    int result = inputs[0] * inputs[1];
    printf("The multiplication of %d and %d is : %d\n", inputs[0], inputs[1], result);
}

/**
 * @brief Computes and prints the division of two integers.
 *
 * Takes an array of two integers and computes the division of the first by the second. The result is printed to the standard output.
 * Note: This function does not handle division by zero.
 *
 * @param inputs An array of two integers where the first is divided by the second.
 */
void division(int inputs[]) {
    int result = inputs[0] / inputs[1]; // Corrected to perform division instead of addition.
    printf("The division of %d and %d is : %d\n", inputs[0], inputs[1], result);
}

/**
 * @brief Displays a menu of operations to the user.
 *
 * Prints a series of messages to the standard output, outlining the various operations that the user can select.
 * These operations include sum, subtraction, multiplication, and division.
 */
void displayMenu(){
    char menuMessages[][50] = {
            "Please Select one operation.",
            "Enter a digit between 1 and 4.",
            "1-Sum.",
            "2-Substraction.",
            "3-Multiplication.",
            "4-Division."
    };
    for (int i = 0; i < sizeof(menuMessages) / sizeof(menuMessages[0]); i++) {
        printf("%s\n", menuMessages[i]);

    }
}

/**
 * @brief Selects an operation based on user input and performs it.
 *
 * Reads the user's choice of operation from the standard input and calls the corresponding function
 * to perform the operation on the global 'inputs' array. It supports sum, subtraction, multiplication, and division.
 */
void selectOperation() {
    int selectedOperation;
    scanf("%d", &selectedOperation);
    switch (selectedOperation) {
        case 1:
            sum(inputs);
            break;
        case 2:
            substraction(inputs);
            break;
        case 3:
            multiplication(inputs);
            break;
        case 4:
            division(inputs);
            break;
        default:
            printf("Invalid choice.\n");
    }
}

/**
 * @brief Main function to run operations.
 *
 * Prompts the user to enter two numbers, then displays a menu of operations. After the user selects
 * an operation, it performs the operation on the entered numbers and prints the result.
 */
void operations()
{
    char messages[][50] = {
            "Please enter the first Number.",
            "Now please enter the second Number."
    };

    for (int i = 0; i < sizeof(messages) / sizeof(messages[0]); i++) {
        inputs[i] = askForInput(messages[i]);
    }

    printf("You entered the following numbers: %d, %d\n", inputs[0], inputs[1]);
    displayMenu();
    selectOperation();
}
