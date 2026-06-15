#include <stdio.h>

int main(void) {
    int count = 0;
    for (;;) { // Эквивалентно while(1)
        count++;
        if (count == 5) {
            break; // Аварийный выход из тела цикла
        }
    }
    printf("Loop stopped at %d\n", count);
    return 0;
}
