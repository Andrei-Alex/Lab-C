/**
 * @file utils.h
 * @brief Header file for utility functions used across the application.
 *
 * This header file declares functions that are implemented in utils.c.
 * It provides function prototypes for utility functions including input validation 
 * and execution of functions based on user choices. These functions are essential 
 * for managing user input and facilitating the main logic of the application.
 */

#ifndef HELPERS_H
#define HELPERS_H

#include <stdio.h>

/**
 * @brief Prototype for checking if a string is a valid integer.
 * 
 * This function validates whether a given string can be fully converted to an 
 * integer. It is useful for input validation where integer values are expected.
 * 
 * @param str A constant pointer to the string to be validated.
 * @return Returns 1 if the string is a valid integer, 0 otherwise.
 */
int isValidNumber(const char *str);

/**
 * @brief Prototype for executing a function based on the given user choice.
 *
 * This function is a placeholder for executing specific functions based on an 
 * integer choice. This can be adapted to run various functionalities depending 
 * on the user's input or other selection criteria.
 *
 * @param choice An integer representing the user's choice or selection.
 */
void runSelectedFunction(int choice);

#endif
