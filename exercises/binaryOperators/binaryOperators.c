#include <stdio.h>

/**
 * @brief  Perform binary AND, OR, XOR, and NOT operations on two char values and prints the results in binary format.
 *
 * This function demonstrates the use of bitwise AND, OR, XOR, and NOT operations on two characters (8 bits each).
 * It takes no arguments as the characters are hard-coded within the function. The results of the
 * bitwise AND, OR, XOR, and NOT operations are then printed in an 8-bit binary format.
 *
 */
void binaryOperators() {
    // Initialize two char variables
    char a = 5; // In binary: 00000101
    char b = 9; // In binary: 00001001

    // Perform bitwise AND operation
    char resultAnd = a & b;
    // Perform bitwise OR operation
    char resultOr = a | b;
    // Perform bitwise XOR operation
    char resultXor = a ^ b;
    // Perform bitwise NOT operations
    char resultNotA = ~a;
    char resultNotB = ~b;

    // Print results for AND
    printf("The result of AND binary for %d and %d is: \n", a, b);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (resultAnd >> i) & 1);
    }
    printf("\n");

    // Print results for OR
    printf("The result of OR binary for %d and %d is: \n", a, b);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (resultOr >> i) & 1);
    }
    printf("\n");

    // Print results for XOR
    printf("The result of XOR binary for %d and %d is: \n", a, b);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (resultXor >> i) & 1);
    }
    printf("\n");

    // Print results for NOT a
    printf("The result of NOT binary for %d is: \n", a);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (resultNotA >> i) & 1);
    }
    printf("\n");

    // Print results for NOT b
    printf("The result of NOT binary for %d is: \n", b);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (resultNotB >> i) & 1);
    }
    printf("\n");
}

