#include <stdio.h>

int string_length(const char *str) {
    const char *p = str;
    while (*p != '\0') p++;
    return p - str;
}

int main() {
    printf("Длина: %d\n", string_length("Hello"));
    return 0;
}
