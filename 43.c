#include <stdio.h>

int main() {
    // Вывод печатных символов ASCII
    for(int i = 32; i < 127; i++) {
        printf("%3d: %c\t", i, i);
        if ((i - 31) % 5 == 0) printf("\n");
    }
    return 0;
}
