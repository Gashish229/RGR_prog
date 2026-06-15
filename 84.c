#include <stdio.h>

int main() {
    int a = 5;  // 0101
    int b = 3;  // 0011
    
    printf("Побитовое И (a & b): %d\n", a & b); // 0001 (1)
    printf("Побитовое ИЛИ (a | b): %d\n", a | b); // 0111 (7)
    printf("Поиск искл. ИЛИ (a ^ b): %d\n", a ^ b); // 0110 (6)
    return 0;
}
