#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Введите символ: ");
    scanf("%c", &c);
    if (isalpha(c)) {
        printf("Это буква\n");
    } else if (isdigit(c)) {
        printf("Это цифра\n");
    } else {
        printf("Это специальный символ\n");
    }
    return 0;
}
