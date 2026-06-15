#include <stdio.h>
#include <stdlib.h> // Необходимо для функции atoi

int main(int argc, char *argv[]) {
    int sum = 0;
    for (int i = 1; i < argc; i++) {
        sum += atoi(argv[i]); // Парсинг C-строки в целочисленный тип int
    }
    printf("Сумма аргументов: %d\n", sum);
    return 0;
}
