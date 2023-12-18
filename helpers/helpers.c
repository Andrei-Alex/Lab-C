#include "helpers.h"
#include <stdlib.h>
#include "../exercises/guessTheNumber/guessTheNumber.h"

int isValidInteger(const char *str) {
    char *endptr;
    strtol(str, &endptr, 10);

    if (endptr == str || (*endptr != '\n' && *endptr != '\0')) {
        return 0;
    }
    return 1;
}

void runSelectedFunction(int choice) {
    printf("Running function for choice: %d\n", choice);
}