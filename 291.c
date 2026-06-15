#include <stdio.h>

void custom_strcpy(char *dest, const char *src) {
    // Побайтовое копирование ячеек ОЗУ, включая нуль-терминатор
    while ((*dest = *src) != '\0') {
        dest++;
        src++;
    }
}

int main(void) {
    char source[] = "CopyMe";
    char destination[20]; // Выделенный буфер на стеке

    custom_strcpy(destination, source);
    printf("Скопированная строка: %s\n", destination);
    return 0;
}
