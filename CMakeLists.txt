cmake_minimum_required(VERSION 3.27)

project(Lab C)
set(CMAKE_C_STANDARD 11)

# Main application
add_executable(Lab main.c
        utils/exercisesMap.c
        utils/helpers/helpers.c
        exercises/guessTheNumber/guessTheNumber.c
        exercises/multiplicationTable/multiplicationTable.c
        exercises/operations/operations.c
        exercises/binaryOperators/binaryOperators.c
        exercises/bitShift/bitShift.c
        exercises/binaryEven/binaryEven.c
        exercises/binaryEven/binaryEven.h
        exercises/arrayIntersection/arrayIntersection.c
        exercises/arrayIntersection/arrayIntersection.h
        exercises/oddAndEven/oddAndEven.h
        exercises/oddAndEven/oddAndEven.c
        exercises/arraySplit/arraySplit.c
        exercises/arraySplit/arraySplit.h
        exercises/arrayDeleteDuplicate/arrayDeleteDuplicate.h
        exercises/arrayDeleteDuplicate/arrayDeleteDuplicate.c
        exercises/arrayRandom/arrayRandom.h
        exercises/arrayRandom/arrayRandom.c
        exercises/arrayNumberFrequency/arrayNumberFrequency.c
        exercises/arrayNumberFrequency/arrayNumberFrequency.h
)
