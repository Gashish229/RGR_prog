#include <stdio.h>

int main() {
    FILE *temp = tmpfile(); // Создает файл во временной директории ОС
    if (temp != NULL) {
        fputs("Временные данные", temp);
        printf("Временный файл создан и данные записаны.\n");
        fclose(temp); // Файл удалится из ОС автоматически!
    }
    return 0;
}
