#include <stdio.h>

int main(void) {
    FILE *file_ptr = fopen("test.txt", "r");
    if (file_ptr == NULL) return 1;

    char buffer[256]; // Буфер строки на стеке

    // fgets считывает строку до символа '\n' или пока не заполнит буфер
    while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(file_ptr);
    return 0;
}
