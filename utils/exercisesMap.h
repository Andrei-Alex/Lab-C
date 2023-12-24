/**
 * @file exercisesMap.h
 * @brief Header file that defines mapping of exercise names to function pointers.
 *
 * This file contains definitions and structures used for mapping exercise names
 * to their corresponding functions. It allows for dynamic discovery and execution
 * of exercises.
 */

#ifndef EXERCISESMAP_H
#define EXERCISESMAP_H

/**
 * @brief A struct to map exercise names to corresponding functions.
 *
 * Each ExerciseMap associates a string name with a function pointer that can be
 * called to execute the exercise.
 */
typedef struct {
    char *name;   // Name of the exercise
    void (*func)(); // Function pointer to the exercise's main function
} ExerciseMap;

// Function declarations
void printAvailableExercise();
void runExerciseByName(const char* name);

#endif // EXERCISESMAP_H
