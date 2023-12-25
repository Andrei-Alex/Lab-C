#include <stdio.h>

int getDigit() {
    int userInput;
    printf("Please enter a single digit: ");
    scanf("%d", &userInput);

    return userInput;
}
void printTable(int digit) {

    for(int i= 1; i <= 10; i++) {
        printf("%d * %d = %d\n", i, digit, i * digit);
    }
}
void multiplicationTable() {
    int digit = getDigit();
    printTable(digit);
}