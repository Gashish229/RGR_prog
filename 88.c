#include <stdio.h>

int main() {
    int flags = 4; // 00000100
    int bit_to_check = 2;
    
    int isSet = (flags & (1 << bit_to_check)) != 0;
    if (isSet) {
        printf("Бит %d установлен (равен 1)\n", bit_to_check);
    } else {
        printf("Бит %d сброшен (равен 0)\n", bit_to_check);
    }
    return 0;
}
