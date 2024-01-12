#include <stdio.h>

void pointer() {
    // Declare an integer variable 'a' and initialize it to 100
    int a = 100;

    // Print the value of 'a'
    printf("a = %d\n", a);

    // Print the memory address of 'a' using the address-of operator '&'
    printf("adresa a: %p\n", &a);

    // Declare a pointer to an integer 'pa' and initialize it with the address of 'a'
    int *pa = &a;

    // Print the memory address stored in the pointer 'pa'
    printf("*pa = %p\n", (void *)pa);

    // Dereference the pointer 'pa' and change the value of 'a' to 120
    *pa = 120;

    // Print the new value of 'a'
    printf("a = %d\n", a);

    int *pointerToInt;
    char *pointerToChar;
    double *pointerToDouble;
    float *pointerToFloat;
    void *pointerToVoid;

    // Display all the dimensions of pointers
    printf("Dimensiunea pointerului la int: %zu bytes\n", sizeof(pointerToInt));
    printf("Dimensiunea pointerului la char: %zu bytes\n", sizeof(pointerToChar));
    printf("Dimensiunea pointerului la double: %zu bytes\n", sizeof(pointerToDouble));
    printf("Dimensiunea pointerului la float: %zu bytes\n", sizeof(pointerToFloat));
    printf("Dimensiunea pointerului la void: %zu bytes\n", sizeof(pointerToVoid));
    printf("Dimensiunea pointerului la void: %zu bytes\n", sizeof(*pa));

}
