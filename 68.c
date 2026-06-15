#include <stdio.h>

int main(void) {
    int n = 20;
    for (int i = 2; i <= n; i++) {
        int is_p = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_p = 0;
                break;
            }
        }
        if (is_p) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
