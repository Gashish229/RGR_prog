#include <stdio.h>

int main() {
    int i = 0;
    printf("Постфикс (i++ < 3):\n");
    while (i++ < 3) printf("%d ", i); // Выведет 1 2 3
    
    printf("\nПрефикс (++j < 3):\n");
    int j = 0;
    while (++j < 3) printf("%d ", j); // Выведет 1 2
    printf("\n");
    return 0;
}
