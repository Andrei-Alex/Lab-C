#include <stdio.h>

/**
 * @brief Main function to demonstrate sorting an array and removing duplicates.
 *
 * This program will:
 * 1. Ask the user to input the number of elements in an array.
 * 2. Let the user input these elements.
 * 3. Sort the array using bubble sort.
 * 4. Remove any duplicate elements.
 * 5. Print the sorted array without duplicates.
 */
void arrayDeleteDuplicate() {
    int n, i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int sortedArray[n];
    int k = 0;
    for(i = 0; i < n; i++) {
        if(i == n - 1 || arr[i] != arr[i + 1]) {
            sortedArray[k++] = arr[i];
        }
    }

    printf("Sorted array without duplicates: ");
    for(i = 0; i < k; i++) {
        printf("%d ", sortedArray[i]);
    }
    printf("\n");

}
