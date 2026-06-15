#include <stdio.h>

void caesar_cipher(char *text, int key) {
    while (*text != '\0') {
        if (*text >= 'a' && *text <= 'z') {
            *text = ((*text - 'a' + key) % 26) + 'a'; // Сдвиг внутри алфавита
        }
        text++;
    }
}

int main(void) {
    char message[] = "hello";
    caesar_cipher(message, 3);
    printf("Зашифровано: %s\n", message); // khoor
    return 0;
}
