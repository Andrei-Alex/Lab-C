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
    // Print the value
    printf("*pa value = %d\n", *pa);

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
    printf("Pointer size for int: %zu bytes\n", sizeof(pointerToInt));
    printf("Pointer size for char: %zu bytes\n", sizeof(pointerToChar));
    printf("Pointer size for double: %zu bytes\n", sizeof(pointerToDouble));
    printf("Pointer size for float: %zu bytes\n", sizeof(pointerToFloat));
    printf("Pointer size for void: %zu bytes\n", sizeof(pointerToVoid));

    // Pointer arithmetic
    printf("Address of pa pointer: %p, %d\n", (void *)pa, *pa);
    // Increment pointer
    pa++;
    printf("Address after inc: %p, Nothing stored in this memory location\n", (void *)pa);

    // Decrement pointer
    pa--;
    printf("Address after dec: %p, Value: %d\n", (void *)pa, *pa);
    printf("It returned to the location of pa")
}
