#include <stdio.h>
#include <stdlib.h>

void cleanup() {
    printf("Очистка ресурсов перед выходом...\n");
}

int main() {
    atexit(cleanup); // Функция выполнится при exit() или возврате из main
    printf("Программа работает.\n");
    return 0; // После этой строки сработает cleanup
}
