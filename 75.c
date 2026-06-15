#include <stdio.h>

int main(void) {
    int code = 99;

    switch (code) {
        case 1:  printf("Mode 1\n"); break;
        case 2:  printf("Mode 2\n"); break;
        default: printf("Unknown mode\n"); break; // Сработает для всех остальных чисел
    }
    return 0;
}
