cmake_minimum_required(VERSION 3.27)

project(Lab C)
set(CMAKE_C_STANDARD 11)

# Main application
add_executable(Lab main.c utils/exercisesMap.c exercises/guessTheNumber/guessTheNumber.c utils/helpers/helpers.c
        exercises/multiplicationTable/multiplicationTable.c
        exercises/operations/operations.c)
