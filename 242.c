#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int total = 3;
    char **lines = (char **)malloc(total * sizeof(char *));
    if (lines == NULL) return 1;

    for (int i = 0; i < total; i++) {
        lines[i] = (char *)malloc(40 * sizeof(char));
        if (lines[i] != NULL) {
            printf("Введите строку %d: ", i + 1);
            scanf("%s", lines[i]);
        }
    }

    printf("\nВывод в обратном порядке:\n");
    // Движение счетчика от конца к началу
    for (int i = total - 1; i >= 0; i--) {
        printf("%s\n", lines[i]);
        free(lines[i]);
    }
    free(lines);
    return 0;
}
