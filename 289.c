#include <stdio.h>

int count_vowels(const char *str) {
    int count = 0;
    while (*str != '\0') {
        char ch = *str;
        // Проверка символа на вхождение в подмножество гласных
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
        str++; // Переход к следующему байту ОЗУ
    }
    return count;
}

int main(void) {
    char phrase[] = "Sibsutis Exam";
    printf("Гласных букв: %d\n", count_vowels(phrase)); // Выведет 4
    return 0;
}
