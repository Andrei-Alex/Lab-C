// Exercise translated from assembly language

#include <stdio.h>

int main() { 

    int asciiVector[3] = {65, 78, 68};
    int s = 0;
    char nstr[6] = "     ";
    int idv = 10;

    
    s = asciiVector[0] + asciiVector[1] + asciiVector[2]; 

    
    int i = sizeof(nstr)/sizeof(char) - 2;
    while (s != 0) {
        nstr[i] = (s % idv) + '0';
        s /= idv;
        i--;
    }

    printf("%s\n", nstr);

    return 0;
}
