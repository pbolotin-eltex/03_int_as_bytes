/********************************************
Task 3

Need to output a sequence of bytes from int
using pointer variable.

*********************************************/

#include <stdio.h>

int main() {
    int value = 0x11223344;
    char *ptr = (char*)&value;

    //Print "value" as a sequence of bytes:
    for(int i = 0; i < sizeof(value); i++) {
        printf("%x%c", ptr[i], (sizeof(value)-1 == i)?' ':'\n');
    }
    return 0;
}
