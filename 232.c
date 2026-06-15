#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Введите количество строк: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    // Выделяем массив указателей (char*) в куче
    char **str_array = (char **)malloc(n * sizeof(char *));
    if (str_array == NULL) return 1;

    for (int i = 0; i < n; i++) {
        // Выделяем фиксированный буфер под каждую отдельную строку
        str_array[i] = (char *)malloc(80 * sizeof(char));
        if (str_array[i] == NULL) return 1;
        printf("Введите строку %d: ", i + 1);
        scanf("%s", str_array[i]); // Спецификатор %s сам пишет '\0'
    }

    for (int i = 0; i < n; i++) {
        printf("Строка %d: %s\n", i + 1, str_array[i]);
        free(str_array[i]); // Очищаем побочные блоки кучи
    }
    free(str_array); // Очищаем корневой массив адресов
    str_array = NULL;
    return 0;
}
