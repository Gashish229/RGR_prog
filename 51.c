#include <stdio.h>

void to_uppercase(char *str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str -= 32; // Сдвиг по таблице ASCII в регистр заглавных букв
        }
        str++; // Переход к следующему байту символа
    }
}

int main(void) {
    char text[] = "sibsutis c11";
    to_uppercase(text);
    printf("Result: %s\n", text);
    return 0;
}
