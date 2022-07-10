/*
Memory Representation


Notes ✍:

HEX is the big X (%X)
DEC is the d (%d)
Character is a c (%c)
*/

#include <stdio.h>

int main() {
    char myChar1 = 'a';
    // myChar1 will be stored as binary in memory, the % only formats it into different bases. It's binary but converted depending on how we want to format it.
    //  This is the same for all values in memory.
    printf("Character: %c \n", myChar1);
    printf("Decimal ASCII Code: %d \n", myChar1);
    printf("Hexadecimal ASCII Code: %X \n", myChar1);

    return 0;
}