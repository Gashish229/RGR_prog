#include <stdio.h>

void myStrncpy(char *dest, const char *src, int n) {
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0'; // Заполнение нулями
    }
}

int main() {
    char dest[10];
    myStrncpy(dest, "Hello", 10);
    printf("Копия: %s\n", dest);
    return 0;
}
