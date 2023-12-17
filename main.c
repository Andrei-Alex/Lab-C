#include "helpers/helpers.c"

#include "exercises/guessTheNumber/guessTheNumber.c"

int main() {
    char input[100];
    printf("Enter an integer: ");
    fgets(input, sizeof(input), stdin);

    if (isValidInteger(input)) {
        int choice = strtol(input, NULL, 10); // Convert to integer
        runSelectedFunction(choice);
    } else {
        printf("Invalid input. Please enter an integer.\n");
    }

    return 0;
}