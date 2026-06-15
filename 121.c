#include <stdio.h>

int main(void) {
    FILE *file_ptr = fopen("test.txt", "r"); // Режим чтения ("r" — read)

    if (file_ptr == NULL) {
        printf("Файл не найден!\n");
        return 1;
    }

    char ch;
    // fgetc возвращает int, чтобы корректно обработать макрос конца файла EOF
    int character; 
    while ((character = fgetc(file_ptr)) != EOF) {
        putchar(character);
    }

    fclose(file_ptr);
    return 0;
}
