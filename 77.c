#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "r");
    if (file != NULL) {
        fseek(file, 0, SEEK_END); // В конец файла
        long size = ftell(file);  // Получаем позицию (размер)
        printf("Размер файла: %ld байт\n", size);
        fclose(file);
    }
    return 0;
}
