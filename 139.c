#include <stdio.h>

int pointerStrLen(const char *str) {
    const char *ptr = str;
    while (*ptr) ptr++;
    return ptr - str; // Разница адресов = количество элементов
}

int main() {
    printf("Длина: %d\n", pointerStrLen("Test pointer"));
    return 0;
}
