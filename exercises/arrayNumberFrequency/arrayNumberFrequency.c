#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arrayNumberFrequency.h"

/**
 * @brief Generate and calculate the frequency of numbers in an array
 *
 * This function prompts the user to input the number of elements, generates an array of that size with random numbers ranging from 0 to MAX_VAL, and calculates the frequency of each number appearing in the array. It then prints out the frequency of each number that appears at least once. The random numbers are generated using the current time as a seed to ensure variety in the output across different runs.
 *
 * The memory for the array is dynamically allocated using malloc and is freed before the function returns to avoid memory leaks. The function relies on the constant MAX_VAL defined externally, typically in a header file, to set the upper limit for the random numbers generated.
 *
 * @note The constant MAX_VAL is defined in the included "arrayNumberFrequency.h" header file.
 */


void arrayNumberFrequency() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *v = (int*)malloc(n * sizeof(int));

    srand(time(NULL));

    for(i = 0; i < n; i++) {
        v[i] = rand() % (MAX_VAL + 1);
    }

    int frecventa[MAX_VAL + 1] = {0};

    for(i = 0; i < n; i++) {
        frecventa[v[i]]++;
    }

    printf("Frequency of numbers:\n");
    for(i = 0; i <= MAX_VAL; i++) {
        if(frecventa[i] > 0) {
            printf("Number %d appears de %d times\n", i, frecventa[i]);
        }
    }

    free(v);
}
