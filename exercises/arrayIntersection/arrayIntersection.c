#include <stdio.h>

/**
 * @brief Program to find the intersection of two arrays (common elements)
 *
 * This program takes two statically defined arrays and finds their intersection.
 * The intersection will contain all unique elements present in both arrays.
 * It handles duplicate elements and ensures that each element in the intersection
 * is unique.
 */

void arrayIntersection() {

    int vector1[] = {1, 2, 3, 4, 5};
    int vector2[] = {4, 5, 6, 7, 8};
    int intersectie[5]; // Array to hold the intersection, size of the smaller array
    int dim1 = 5, dim2 = 5; // Sizes of the arrays
    int k = 0; // Counter for intersection array

    // Find intersection
    for(int i = 0; i < dim1; i++) {
        for(int j = 0; j < dim2; j++) {
            if(vector1[i] == vector2[j]) {
                // Check if the element is already in the intersection array
                int found = 0;
                for (int l = 0; l < k; l++) {
                    if (intersectie[l] == vector1[i]) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    intersectie[k] = vector1[i]; // Add element to intersection
                    k++;
                }
            }
        }
    }

    // Print the intersection
    printf("Intersection is: ");
    for(int i = 0; i < k; i++) {
        printf("%d ", intersectie[i]);
    }

}
