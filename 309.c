#include <stdio.h>

int main(int argc, char *argv[]) {
    // Явно используем argv, чтобы у компилятора не было ворнингов о неиспользуемом параметре
    (void)argv; 
    printf("Количество аргументов: %d\n", argc);
    return 0;
}
