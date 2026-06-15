#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) return false;
    }
    return true;
}

int main(void) {
    int number = 29;
    printf("%d %s\n", number, is_prime(number) ? "простое" : "составное");
    return 0;
}
