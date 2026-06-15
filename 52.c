#include <stdio.h>

int split_words(char *str, char *words[]) {
    int count = 0;
    int in_word = 0;

    while (*str != '\0') {
        if (*str != ' ' && *str != '\t' && *str != '\n') {
            if (!in_word) {
                words[count++] = str; // Сохраняем адрес начала нового слова
                in_word = 1;
            }
        } else {
            *str = '\0'; // Заменяем пробельный символ на нуль-терминатор
            in_word = 0;
        }
        str++;
    }
    return count;
}

int main(void) {
    char text[] = "Exam C Revun";
    char *word_ptrs[10];
    int total = split_words(text, word_ptrs);

    for (int i = 0; i < total; i++) {
        printf("Word %d: %s\n", i, word_ptrs[i]);
    }
    return 0;
}
