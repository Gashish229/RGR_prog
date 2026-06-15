#include <stdio.h>
#include <string.h> // Обязательно для strcmp

int main(int argc, char *argv[]) {
    int found = 0;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "ключ") == 0) { // Побайтовое сравнение строк
            found = 1;
            break;
        }
    }
    printf("Результат поиска: %s\n", found ? "Найдено" : "Не найдено");
    return 0;
}
