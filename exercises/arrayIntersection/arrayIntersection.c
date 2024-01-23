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
    int intersectie[5];
    int dim1 = 5, dim2 = 5;
    int k = 0;


    for(int i = 0; i < dim1; i++) {
        for(int j = 0; j < dim2; j++) {
            if(vector1[i] == vector2[j]) {
                int found = 0;
                for (int l = 0; l < k; l++) {
                    if (intersectie[l] == vector1[i]) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    intersectie[k] = vector1[i];
                    k++;
                }
            }
        }
    }

    printf("Intersection is: ");
    for(int i = 0; i < k; i++) {
        printf("%d ", intersectie[i]);
    }

}
