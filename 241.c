#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Выделяем буфер в куче на 60 символов
    char *text_space = (char *)malloc(60 * sizeof(char));
    if (text_space == NULL) return 1;

    printf("Введите одно слово: ");
    // Передаем сам указатель text_space без амперсанда '&', так как он уже хранит адрес начала
    scanf("%s", text_space);

    printf("Результат: %s\n", text_space);

    free(text_space);
    text_space = NULL;
    return 0;
}
