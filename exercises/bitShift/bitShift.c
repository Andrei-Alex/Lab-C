#include <stdio.h>

/**
 * @brief Performs bit shifting operation on an unsigned integer.
 *
 * This function prompts the user to input a number, the direction of the shift
 * ('s' for left, 'd' for right), and the number of positions to shift. It then
 * calculates and displays the result of the bit shift operation. The operation
 * is either a left shift or a right shift, as specified by the user.
 *
 */
void bitShift() {
    unsigned int number; // The number to perform the bit shift operation on
    int shift; // The number of positions to shift
    char direction; // 's' for left ('stanga'), 'd' for right ('dreapta')

    // Prompting user for input
    printf("Enter a number: ");
    scanf("%u", &number);
    printf("Enter direction ('s' for left, 'd' for right): ");
    scanf(" %c", &direction); // Notice the space before %c to catch any extra newline character
    printf("Enter the number of bits to shift: ");
    scanf("%d", &shift);

    // Calculating and displaying the result
    if (direction == 's') {
        // Left shifting
        printf("Result of left shift: %u\n", number << shift);
    } else if (direction == 'd') {
        // Right shifting
        printf("Result of right shift: %u\n", number >> shift);
    } else {
        // Handling incorrect direction input
        printf("Unknown direction!\n");
    }
}