#include "utils/exercisesMap.h"
#include <stdio.h>
#include <string.h>

/**
 * @brief Main entry point for the exercise selection system.
 *
 * This function starts the program and provides a user interface for selecting
 * and running exercises. It lists all available exercises and then prompts the
 * user to enter the name of the exercise they wish to run. It uses functionalities
 * defined in exercisesMap.h and associated source files.
 *
 * @return int: The exit status of the program. Returns 0 on successful execution.
 */
int main() {
    printAvailableExercise();

    char input[100];
    printf("Enter the exercise name: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    runExerciseByName(input);

    return 0;
}