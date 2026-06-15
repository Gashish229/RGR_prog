#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 4) return 1;

    int num1 = atoi(argv[1]);
    char op = argv[2][0]; // Берем первый символ строки операции
    int num2 = atoi(argv[3]);

    switch (op) {
        case '+': printf("%d\n", num1 + num2); break;
        case '-': printf("%d\n", num1 - num2); break;
        default:  printf("Неподдерживаемая операция\n"); break;
    }
    return 0;
}
