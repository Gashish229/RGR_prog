#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Это   пример  строки с несколькими словами";
    int count = 0, in_word = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(!isspace(str[i]) && !in_word) {
            in_word = 1;
            count++;
        } else if(isspace(str[i])) {
            in_word = 0;
        }
    }
    printf("Количество слов: %d\n", count);
    return 0;
}
