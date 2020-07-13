#include <stdio.h>

int main() {
    int value = 0x11223344;
    char *ptr = (char*)&value;

    //Print "value" as a sequence of bytes:
    for(int i = 0; i < sizeof(value); i++) {
        printf("%x%c", ptr[i], (i == sizeof(value)-1)?' ':'\n');
    }
    return 0;
}
