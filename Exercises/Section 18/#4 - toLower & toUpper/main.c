#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char toUpper(char letter) {
    if (letter >= 'a' && letter <= 'z')
        return letter -= 0x20;
    return -1; 
}


char toLower(char letter) {
    if (letter >= 'A' && letter <= 'Z')
        return letter += 0x20;
    return -1; 
}

int main()
{
    return 0;
}