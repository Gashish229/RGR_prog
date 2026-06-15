#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f = fopen("text.txt", "r");
    if (!f) return 1;
    
    int count = 0, in_word = 0, c;
    while ((c = fgetc(f)) != EOF) {
        if (isspace(c)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
    }
    fclose(f);
    printf("Количество слов: %d\n", count);
    return 0;
}
