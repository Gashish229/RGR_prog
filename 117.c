#include <stdio.h>

int main(void) {
    int n;
    printf("Введите предел N: ");
    if (scanf("%d", &n) != 1) return 1;

    int i = 2;
    while (i <= n) {
        int sum_divisors = 0;
        int j = 1;
        
        while (j < i) {
            if (i % j == 0) {
                sum_divisors += j;
            }
            j++;
        }
        
        if (sum_divisors == i) {
            printf("%d — совершенное число\n", i);
        }
        i++;
    }
    return 0;
}
