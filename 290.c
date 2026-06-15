#include <stdio.h>

void custom_strcat(char *dest, const char *src) {
    // 1. Находим конец первой строки (нуль-терминатор)
    while (*dest != '\0') {
        dest++;
    }
    // 2. Копируем байты второй строки в хвост первой
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Принудительно закрываем объединенную строку
}

int main(void) {
    char buffer[50] = "Hello "; // Буфер на стеке с запасом памяти
    char source[] = "World";
    
    custom_strcat(buffer, source);
    printf("Результат: %s\n", buffer); // "Hello World"
    return 0;
}
