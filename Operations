// Ask for 2 numbers
// Display a menu with 4 operations
// execute the selected operation

#include <stdio.h>

int askForInput(char str[]) {
    int number;
    printf("%s\n", str);
    scanf("%d", &number);
    return number;
}

int main()
{
    char messages[][50] = {
        "Please enter the first Number.\n",
        "Now please enter the second Number.\n"
    };
    int inputs[4];
    
    for (int i = 0; i < sizeof(messages) / sizeof(messages[0]); i++) {
        inputs[i] = askForInput(messages[i]);
      
    }

    printf("You entered the following numbers: %d, %d\n", inputs[0], inputs[1]);
    return 0;
}
