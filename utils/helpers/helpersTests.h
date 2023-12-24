#include "helpers.h"
#include <assert.h>

void test_validInput() {
    assert(isValidNumber("5") == 5);
}

void test_invalidInput() {
    assert(isValidNumber("abc") == -1);
}

void test_partialInput() {
    assert(isValidNumber("123abc") == -1);
}

void test_outOfRangeInput() {
    assert(isValidNumber("12345") == -1);
}

void test_emptyInput() {
    assert(isValidNumber("") == -1);
}

int isValidNumber_tests() {
    test_validInput();
    test_invalidInput();
    test_partialInput();
    test_outOfRangeInput();
    test_emptyInput();
    printf("IsValidNumber passed!\n");
    return 0;
}
