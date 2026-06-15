#include <stdio.h>
#include <errno.h>

int main() {
    FILE *file = fopen("non_existent_file.txt", "r");
    if (file == NULL) {
        // perror автоматически выведет текст системной ошибки по коду в errno
        perror("Ошибка при открытии файла"); 
        printf("Код ошибки (errno): %d\n", errno);
    }
    return 0;
}
