#include <stdio.h>

void print_capitalized(char *str) {
    int is_start = 1;
    char *word_start = NULL;

    while (*str != '\0') {
        if (*str != ' ') {
            if (is_start) {
                word_start = str;
                is_start = 0;
            }
        } else {
            *str = '\0';
            if (word_start && *word_start >= 'A' && *word_start <= 'Z') {
                printf("%s\n", word_start);
            }
            word_start = NULL;
            is_start = 1;
        }
        str++;
    }
    if (word_start && *word_start >= 'A' && *word_start <= 'Z') {
        printf("%s\n", word_start);
    }
}

int main(void) {
    char text[] = "Sibsutis exam Language C";
    print_capitalized(text);
    return 0;
}
