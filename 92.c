#include <stdio.h>
#include <ctype.h>

void toUpperCase(char *str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

int main() {
    char str[] = "hello world";
    toUpperCase(str);
    printf("Верхний регистр: %s\n", str);
    return 0;
}
