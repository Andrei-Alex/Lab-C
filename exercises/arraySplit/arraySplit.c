#include <stdio.h>

/**
 * Function: arraySplit()
 * Purpose: Split an array into two arrays, one containing odd numbers and the other containing even numbers.
 *
 * @brief Splits a static array of characters, categorizing its elements into 'even' and 'odd'
 *        based on their value. It then prints these two categories separately.
 *        This function is designed for small integer values and uses char arrays
 *        for memory efficiency.
 *
 * @note The function currently handles a fixed-size array and does not dynamically allocate memory.
 *       It assumes the array elements are within the range that a char can hold.
 */

void arraySplit() {
    char array[5] = {1, 2, 3, 4, 5};
    char even[5];
    char odd[5];
    int evenSize = 0;
    int oddSize = 0;
    int length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length; i++) {
        if (array[i] % 2 == 0) {
            even[evenSize++] = array[i];
        } else {
            odd[oddSize++] = array[i];
        }
    }

    printf("Even numbers: ");
    for (int i = 0; i < evenSize; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd numbers: ");
    for (int i = 0; i < oddSize; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
};