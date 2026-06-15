#include <stdio.h>

int main() {
    int year;
    printf("Введите год: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Год високосный\n");
    } else {
        printf("Год не високосный\n");
    }
    return 0;
}
