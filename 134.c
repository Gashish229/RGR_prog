#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f = fopen("text.txt", "r");
    if (!f) return 1;
    
    int chars = 0, words = 0, lines = 0, in_word = 0, c;
    while ((c = fgetc(f)) != EOF) {
        chars++;
        if (c == '\n') lines++;
        if (isspace(c)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }
    fclose(f);
    printf("Символов: %d, Слов: %d, Строк: %d\n", chars, words, lines);
    return 0;
}
