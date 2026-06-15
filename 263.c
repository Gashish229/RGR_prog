#include <stdio.h>

int main() {
    if (rename("old_name.txt", "new_name.txt") == 0) {
        printf("Файл успешно переименован.\n");
    } else {
        perror("Ошибка переименования");
    }
    return 0;
}
