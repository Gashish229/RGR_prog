#include <stdio.h>
#include <ctype.h>

void toLowerCase(char *str) {
    while (*str) {
        *str = tolower((unsigned char)*str);
        str++;
    }
}

int main() {
    char str[] = "HELLO WORLD";
    toLowerCase(str);
    printf("Нижний регистр: %s\n", str);
    return 0;
}
