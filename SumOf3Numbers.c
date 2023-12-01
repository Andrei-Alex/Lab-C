#include <stdio.h> // Include the standard input/output library

int main() { 
    
    // A = 65
    // N = 78
    // D = 68

    int asciiVector[3] = {65, 78, 68};     // Declare an array of integers and initialize it with ASCII values of the initials
    int s = 0;                             // Declare an integer variable s (sum) and initialize it to 0. 
    char nstr[6] = "     ";                // Declare a character array 'nstr' of size 6 and initialize it with spaces.
    int idv = 10;                          // Declare an integer variable 'idv' and initialize it to 10.

    // Calculate the sum of the ASCII values
    
    s = asciiVector[0] + asciiVector[1] + asciiVector[2]; 

    // Convert the sum to a string and store it in nstr
    
    int i = sizeof(nstr)/sizeof(char) - 2; // Declare an integer variable i with the lenght of nstr -2 (-1 for the null character and -1 because it starts a 0)
    while (s != 0) {                       // Start of the while loop that will continue as long as s is not equal to 0
        nstr[i] = (s % idv) + '0';         // Convert the last digit of 's' to a character and store it in 'nstr' at index 'i'
        s /= idv;                          // Divide s by 'idv' and store the result back in s
        i--;                               // Decrement i by 1
    }

    // Print the result
    printf("%s\n", nstr);

    return 0;
}
