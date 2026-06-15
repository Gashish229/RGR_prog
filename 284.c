#include <stdio.h>

// Итеративный алгоритм Евклида через остаток от деления
int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % temp;
        a = temp;
    }
    return a;
}

int main(void) {
    printf("НОД(54, 24) = %d\n", find_gcd(54, 24)); // Выведет 6
    return 0;
}
