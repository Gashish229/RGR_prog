#include <stdio.h>

void print_table(int (*func)(int), int start, int end) {
    for (int x = start; x <= end; x++) {
        printf("f(%d) = %d\n", x, func(x));
    }
}

int square(int x) { return x * x; }
int double_val(int x) { return x * 2; }

int main() {
    printf("Квадраты:\n");
    print_table(square, 1, 3);
    printf("Удвоение:\n");
    print_table(double_val, 1, 3);
    return 0;
}
