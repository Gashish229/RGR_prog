#include <stdio.h>

int main(int argc, char *argv[]) {
    // argv[0] — это всегда имя исполняемого файла, аргумент начинается с argv[1]
    if (argc < 2) {
        printf("Использование: %s <ваше_имя>\n", argv[0]);
        return 1;
    }
    printf("Привет, %s!\n", argv[1]);
    return 0;
}
