#include <stdio.h>

int main() {
    int c;
    printf("Введите текст (Enter для выхода):\n");
    while((c = getchar()) != '\n' && c != EOF) {
        putchar(c);
    }
    printf("\n");
    return 0;
}
