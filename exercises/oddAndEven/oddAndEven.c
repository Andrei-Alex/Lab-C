#include <stdio.h>

/**
 * @brief Program to separate an array into two arrays, one for even numbers and the other for odd numbers.
 *
 * This program takes a statically defined array and separates its elements into two different arrays:
 * one for even numbers and another for odd numbers. It iterates over the elements of the original array,
 * checking if they are even or odd, and then places them into the respective array. The program
 * handles the separation efficiently by iterating through the array only once.
 */

void oddAndEven() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // Example of initial array
    int even[9]; // Array for even numbers, maximum possible number of elements
    int odd[9]; // Array for odd numbers, maximum possible number of elements
    int i, evenCount = 0, oddCount = 0;

    // Size of the initial array
    int size = sizeof(array) / sizeof(array[0]);

    // Loop to separate even and odd elements
    for(i = 0; i < size; i++) {
        if(array[i] % 2 == 0) {
            even[evenCount++] = array[i]; // Adding to the even array
        } else {
            odd[oddCount++] = array[i]; // Adding to the odd array
        }
    }

    // Printing the array of even numbers
    printf("Even numbers: ");
    for(i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    // Printing the array of odd numbers
    printf("Odd numbers: ");
    for(i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
}
