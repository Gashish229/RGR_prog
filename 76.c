#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "r");
    if (file != NULL) {
        fseek(file, 5, SEEK_SET); // Смещение на 5 байт от начала
        char ch = fgetc(file);
        printf("6-й символ в файле: %c\n", ch);
        fclose(file);
    }
    return 0;
}
