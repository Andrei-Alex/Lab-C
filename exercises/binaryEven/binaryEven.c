#include <stdio.h>

/**
 * Function: binaryEven()
 * Purpose: To determine if a user-inputted number is even or odd using bitwise OR operation.
 *
 * @brief
 * This is a simple C program that prompts the user to enter a number. It then uses the bitwise OR operator
 * to set the least significant bit of the number to 1, creating a modified number. It compares this modified
 * number to the original number to determine if it's even or odd. If the modified number is greater than the
 * original number, it means the least significant bit of the original number was 0, and the number is even.
 * If the modified number is equal to the original, it means the least significant bit was already 1, indicating
 * the number is odd.
 *
 */
void binaryEven() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Using OR to set the least significant bit to 1
    int modifiedNum = num | 1;

    // Comparing the modified number with the original
    if (modifiedNum > num) {
        printf("The number %d is even.\n", num);
    } else {
        printf("The number %d is odd.\n", num);
    }
}
