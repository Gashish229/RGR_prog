#include <stdio.h>

int main() {
    if (remove("unnecessary_file.txt") == 0) {
        printf("Файл удален.\n");
    } else {
        perror("Ошибка удаления файла");
    }
    return 0;
}
