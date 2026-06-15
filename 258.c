#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Вывод списка файлов (команда ls):\n");
    system("ls -l"); // В Windows можно использовать "dir"
    return 0;
}
