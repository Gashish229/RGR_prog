#include <stdio.h>
#include <stdlib.h>

char *custom_strdup(const char *str) {
    int len = 0;
    // Ручной подсчет длины строки до нуль-терминатора
    while (str[len] != '\0') len++;

    // Выделяем память с учетом финального байта '\0'
    char *copy = (char *)malloc((len + 1) * sizeof(char));
    if (copy == NULL) return NULL;

    for (int i = 0; i <= len; i++) {
        copy[i] = str[i]; // Копируем символы вместе с '\0'
    }
    return copy; // Возвращаем адрес из кучи
}

int main(void) {
    char source[] = "Sibsutis Heap";
    char *duplicate = custom_strdup(source);

    if (duplicate != NULL) {
        printf("Копия: %s\n", duplicate);
        free(duplicate);
        duplicate = NULL;
    }
    return 0;
}
