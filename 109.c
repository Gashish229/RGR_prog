#include <stdio.h>

int main(void) {
    int n;
    printf("Введите ограничение N: ");
    if (scanf("%d", &n) != 1) return 1;

    int f1 = 0, f2 = 1;
    
    while (f1 < n) {
        printf("%d ", f1);
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
    printf("\n");
    return 0;
}
