#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int num;
    printf("Введите число: ");
    if (scanf("%d", &num) != 1) return 1;

    bool is_power = true;
    if (num <= 0) {
        is_power = false;
    } else {
        while (num > 1) {
            if (num % 2 != 0) {
                is_power = false;
                break;
            }
            num /= 2;
        }
    }

    printf("%s\n", is_power ? "Степень двойки" : "Не степень двойки");
    return 0;
}
