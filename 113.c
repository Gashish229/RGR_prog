#include <stdio.h>

int main(void) {
    int sum = 0;
    int i = 10;

    while (i <= 99) {
        if (i % 3 == 0) {
            sum += i;
        }
        i++;
    }

    printf("Сумма: %d\n", sum);
    return 0;
}
