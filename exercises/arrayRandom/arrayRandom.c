#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief Generates and prints an array of random integers.
 *
 * This function creates an array of a fixed size (10) and fills it
 * with random integers ranging from 0 to 99. It uses the srand()
 * function to seed the random number generator with the current time,
 * ensuring different output on each execution. After populating the array,
 * it prints the array elements to the standard output.
 */

void arrayRandom() {
    int arraySize = 10;
    int array[arraySize];

    srand(time(NULL));

    for (int i = 0; i < arraySize; i++) {
        array[i] = rand() % 100;
    }

    for (int i = 0; i < arraySize; i++) {
        printf("%d ", array[i]);
    }

}
