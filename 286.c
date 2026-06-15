#include <stdio.h>

size_t custom_strlen(const char *str) {
    const char *ptr = str;
    // Идем по адресам ОЗУ, пока не встретим нуль-терминатор
    while (*ptr != '\0') {
        ptr++; // Сдвиг указателя ровно на 1 байт (размер char)
    }
    return ptr - str; // Разность указателей дает количество элементов
}

int main(void) {
    char message[] = "Sibsutis";
    printf("Длина строки: %zu\n", custom_strlen(message)); // Выведет 8
    return 0;
}
