#include <stdio.h>

int main(void) {
    FILE *file = fopen("data.csv", "r");
    if (file == NULL) return 0; // Если файла нет, выходим без ошибки

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == ',') {
            printf("\t|\t"); // Заменяем CSV-разделитель (запятую) на табличную границу
        } else {
            putchar(ch);
        }
    }

    fclose(file);
    return 0;
}
