#include <stdio.h>

int find_char_index(const char *str, char target) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == target) {
            return i; // Возвращаем логический индекс
        }
        i++;
    }
    return -1; // Символ отсутствует
}

int main(void) {
    char text[] = "programming";
    printf("Индекс буквы 'g': %d\n", find_char_index(text, 'g')); // Выведет 3
    return 0;
}
