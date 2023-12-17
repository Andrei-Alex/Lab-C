#include "exercisesMap.h"
#include <stdio.h>
#include <string.h>
#include "../exercises/guessTheNumber/guessTheNumber.h"

ExerciseMap exerciseList[] = {
        {"Exercise 1", guessTheNumber},
};

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