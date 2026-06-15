#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "r");
    if (file != NULL) {
        int num;
        // feof возвращает истину только ПОСЛЕ неудачной попытки чтения за концом файла
        while (fscanf(file, "%d", &num) == 1) { 
            printf("Число: %d\n", num);
        }
        if (feof(file)) printf("Достигнут конец файла.\n");
        fclose(file);
    }
    return 0;
}
