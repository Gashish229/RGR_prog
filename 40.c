#include <stdio.h>

int main() {
    char str[100];
    printf("Введите строку (до первого пробела): ");
    scanf("%99s", str); // Защита от переполнения буфера
    printf("Строка: %s\n", str);
    return 0;
}
