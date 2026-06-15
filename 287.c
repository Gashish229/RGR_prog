#include <stdio.h>
#include <stdbool.h>

bool is_palindrome_word(const char *word, int len) {
    for (int i = 0; i < len / 2; i++) {
        // Сверяем символы с противоположных концов строки
        if (word[i] != word[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main(void) {
    char word[] = "radar";
    printf("Результат: %s\n", is_palindrome_word(word, 5) ? "Палиндром" : "Нет");
    return 0;
}
