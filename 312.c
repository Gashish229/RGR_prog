#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;

    char *str = argv[1];
    int len = 0;
    while (str[len] != '\0') len++; // Подсчет длины строки

    // Вывод символов с конца строки
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');
    return 0;
}
