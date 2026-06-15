#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char **name_list = NULL;
    int total_names = 0;
    int choice = 1;

    while (choice == 1) {
        // Расширяем массив указателей под новое имя на каждом шаге
        char **temp = (char **)realloc(name_list, (total_names + 1) * sizeof(char *));
        if (temp == NULL) break;
        name_list = temp;

        name_list[total_names] = (char *)malloc(50 * sizeof(char));
        if (name_list[total_names] == NULL) break;

        printf("Введите имя: ");
        scanf("%s", name_list[total_names]);
        total_names++;

        printf("Продолжить? (1 - да, 0 - выведи список и выйди): ");
        if (scanf("%d", &choice) != 1) choice = 0;
    }

    printf("\nИтоговый список имен:\n");
    for (int i = 0; i < total_names; i++) {
        printf("%d. %s\n", i + 1, name_list[i]);
        free(name_list[i]);
    }
    free(name_list);
    return 0;
}
