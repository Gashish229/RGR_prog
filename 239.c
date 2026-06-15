#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int capacity = 4;
    int len = 0;
    char *buffer = (char *)malloc(capacity * sizeof(char));
    if (buffer == NULL) return 1;

    printf("Введите строку (в конце нажмите Enter):\n");
    int ch;
    // Считываем посимвольно поток ввода stdin
    while ((ch = getchar()) != '\n' && ch != EOF) {
        // Если буфер заполнен (оставляем 1 байт под нуль-терминатор)
        if (len >= capacity - 1) {
            capacity += 4; // Увеличиваем емкость буфера шаг за шагом
            char *temp = (char *)realloc(buffer, capacity * sizeof(char));
            if (temp == NULL) break;
            buffer = temp;
        }
        buffer[len++] = (char)ch;
    }
    buffer[len] = '\0'; // Принудительное терминирование строки

    printf("Считанный динамический буфер: %s\n", buffer);
    free(buffer);
    return 0;
}
