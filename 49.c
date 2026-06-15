#include <stdio.h>

void replace_spaces(char *str, char replacement) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            str[i] = replacement;
        }
    }
}

int main() {
    char str[] = "текст с пробелами";
    replace_spaces(str, '_');
    printf("Результат: %s\n", str);
    return 0;
}
