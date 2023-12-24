#include "helpers/exercisesMap.h"
#include <stdio.h>
#include <string.h>

int main() {
    printAvailableExercise();

    char input[100];
    printf("Enter the exercise name: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    runExerciseByName(input);

    return 0;
}