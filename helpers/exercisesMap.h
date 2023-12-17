#ifndef EXERCISES_MAP_H
#define EXERCISES_MAP_H

typedef void (*ExerciseFunc)();

typedef struct {
    const char* name;
    ExerciseFunc func;
} ExerciseMap;

void runExerciseByName(const char* name);

#endif
