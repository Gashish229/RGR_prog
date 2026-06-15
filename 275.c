#include <stdio.h>

int main() {
    unsigned int a = 5; // 0000 0101
    unsigned int b = ~a; // 1111 1010 (инверсия всех битов)
    
    printf("Инверсия 5: %u\n", b);
    return 0;
}
