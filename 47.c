#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;
    printf("Адрес переменной a: %p\n", (void*)p);
    return 0;
}
