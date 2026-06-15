#include <stdio.h>

void replaceChar(char *str, char oldChar, char newChar) {
    while (*str) {
        if (*str == oldChar) *str = newChar;
        str++;
    }
}

int main() {
    char text[] = "banana";
    replaceChar(text, 'a', 'o');
    printf("Результат: %s\n", text); // bonono
    return 0;
}
