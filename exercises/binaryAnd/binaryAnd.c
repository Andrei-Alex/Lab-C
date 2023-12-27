/**
 * @brief  Perform binary AND operation between two char values and prints the result in binary format.
 * 
 * This function demonstrates the use of bitwise AND operation on two characters (8 bits each).
 * It takes no arguments as the characters are hard-coded within the function. The result of the 
 * bitwise AND operation is then printed in an 8-bit binary format.
 *
 *
 */
#include <stdio.h>

void binaryAnd() {
    // Initialize two char variables
    char a = 5; // In binary: 00000101
    char b = 9; // In binary: 00001001

    // Perform bitwise AND operation
    char result = a & b; // In binary: 00000001

    // Print the input values and the result
    printf("The result of AND binary for %d and %d is: \n", a, b);

    // Print each bit of the result
    for (int i = 7; i >= 0; i--) {
        printf("%d", (result >> i) & 1);
    }
    printf("\n");
}
