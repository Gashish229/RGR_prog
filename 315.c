#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;

    if (strcmp(argv[1], "--help") == 0) {
        printf("Справка: используйте параметры запуска.\n");
    } else if (strcmp(argv[1], "--version") == 0) {
        printf("Версия: 1.0.0 (Стандарт C11)\n");
    }
    return 0;
}
