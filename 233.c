#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *f = fopen("data.txt", "r");
    if (f == NULL) return 0; // Если файла нет, завершаем работу безопасно [cite: 1758]

    int capacity = 5;
    int count = 0;
    // Динамический массив указателей на будущие строки
    char **lines = (char **)malloc(capacity * sizeof(char *));
    if (lines == NULL) { fclose(f); return 1; }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), f) != NULL) {
        if (count >= capacity) {
            capacity *= 2;
            char **temp = (char **)realloc(lines, capacity * sizeof(char *));
            if (temp == NULL) break;
            lines = temp;
        }

        // Вычисляем длину считанной строки
        int len = 0;
        while (buffer[len] != '\0') len++;

        lines[count] = (char *)malloc((len + 1) * sizeof(char));
        if (lines[count] != NULL) {
            for (int i = 0; i <= len; i++) lines[count][i] = buffer[i];
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%s", lines[i]);
        free(lines[i]);
    }
    free(lines);
    fclose(f);
    return 0;
}
