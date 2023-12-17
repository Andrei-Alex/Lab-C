// Ask for 2 numbers
// Display a menu with 4 operations
// execute the selected operation

#include <stdio.h>
int inputs[2];

int askForInput(char str[]) {
    int number;
    printf("%s\n", str);
    scanf("%d", &number);
    return number;
}

void sum(int inputs[]) {
    int result = inputs[0] + inputs[1];
    printf("The sum of %d and %d is : %d\n", inputs[0], inputs[1], result);
}
void substraction(int inputs[]) {
     int result = inputs[0] - inputs[1];
    printf("The substraction of %d and %d is : %d\n", inputs[0], inputs[1], result);
}
void multiplication(int inputs[]) {
     int result = inputs[0] * inputs[1];
    printf("The multiplication of %d and %d is : %d\n", inputs[0], inputs[1], result);
}
void division(int inputs[]) {
     int result = inputs[0] + inputs[1];
    printf("The devision of %d and %d is : %d\n", inputs[0], inputs[1], result);
}

void displayMenu(){
     char menuMessages[][50] = {
        "Please Select one operation.\n",
        "Enter a digit between 1 and 4.\n",
        "1-Sum.\n",
        "2-Substraction.\n",
        "3-multiplication.\n",
        "4-Division.\n"
    };
    for (int i = 0; i < sizeof(menuMessages) / sizeof(menuMessages[0]); i++) {
        printf("%s\n", menuMessages[i]);
        
    }
}
void selectOperation() {
    int selectedOperation;
    scanf("%d", &selectedOperation);
    switch (selectedOperation) {
        case 1:
            sum(inputs);
            break;
        case 2:
            substraction(inputs);
            break;
        case 3:
            multiplication(inputs); 
            break;
        case 4:
            division(inputs); 
            break;
        default:
            printf("Invalid choice.\n");
    }
}

int main()
{
    char messages[][50] = {
        "Please enter the first Number.\n",
        "Now please enter the second Number.\n"
    };
    
    for (int i = 0; i < sizeof(messages) / sizeof(messages[0]); i++) {
        inputs[i] = askForInput(messages[i]);
      
    }

    printf("You entered the following numbers: %d, %d\n", inputs[0], inputs[1]);
    displayMenu();
    selectOperation();
    return 0;
}
