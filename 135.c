#include <stdio.h>

// Функция не видна линковщику из других .c файлов
static void hiddenFunction() {
    printf("Это статическая функция.\n");
}

int main() {
    hiddenFunction();
    return 0;
}
