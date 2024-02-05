#include "exercisesMap.h"
#include <stdio.h>
#include <string.h>
#include "../exercises/guessTheNumber/guessTheNumber.h"
#include "../exercises/multiplicationTable/multiplicationTable.h"
#include "../exercises/operations/operations.h"
#include "../exercises/binaryOperators/binaryOperators.h"
#include "../exercises/bitShift/bitShift.h"
#include "../exercises/binaryEven/binaryEven.h"
#include "../exercises/arrayIntersection/arrayIntersection.h"
#include "../exercises/oddAndEven/oddAndEven.h"
#include "../exercises/arraySplit/arraySplit.h"
#include "../exercises/arrayDeleteDuplicate/arrayDeleteDuplicate.h"
#include "../exercises/arrayRandom/arrayRandom.h"
#include "../exercises/arrayNumberFrequency/arrayNumberFrequency.h"

ExerciseMap exerciseList[] = {
        {"Guess", guessTheNumber},
        {"Multiplication", multiplicationTable},
        {"Operations", operations},
        {"BinaryOperators", binaryOperators},
        {"BitShift", bitShift},
        {"BinaryEven", binaryEven},
        {"ArrayIntersection", arrayIntersection},
        {"OddAndEven", oddAndEven},
        {"ArraySplit", arraySplit},
        {"ArrayDeleteDuplicate", arrayDeleteDuplicate},
        {"ArrayRandom", arrayRandom},
        {"ArrayNumberFrequency", arrayNumberFrequency},
};

void printAvailableExercise() {
    printf("Available exercises:\n");
    for (int i = 0; i < sizeof(exerciseList) / sizeof(ExerciseMap); i++) {
        printf("%d. %s\n", i + 1, exerciseList[i].name);
    }
}

void runExerciseByName(const char* name) {
    int exerciseCount = sizeof(exerciseList) / sizeof(ExerciseMap);

    for (int i = 0; i < exerciseCount; i++) {
        if (strcmp(exerciseList[i].name, name) == 0) {
            exerciseList[i].func();
            return;
        }
    }
    printf("Exercise not found.\n");
}