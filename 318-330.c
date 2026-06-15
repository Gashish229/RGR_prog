#include <stdio.h>
#include <stdlib.h>

char *to_base(int num, int base) {
    char *res = (char *)malloc(33 * sizeof(char)); // Максимум 32 бита + '\0'
    if (res == NULL) return NULL;
    
    char digits[] = "0123456789ABCDEF";
    int i = 0;

    while (num > 0) {
        res[i++] = digits[num % base];
        num /= base;
    }
    res[i] = '\0';

    // Разворот полученной строки
    for (int j = 0; j < i / 2; j++) {
        char temp = res[j];
        res[j] = res[i - 1 - j];
        res[i - 1 - j] = temp;
    }
    return res;
}

int main(void) {
    char *hex_str = to_base(255, 16);
    if (hex_str != NULL) {
        printf("255 в 16-ричной: %s\n", hex_str); // FF
        free(hex_str);
    }
    return 0;
}
