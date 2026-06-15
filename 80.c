#include <stdio.h>

void func1() { printf("Функция 1\n"); }
void func2() { printf("Функция 2\n"); }

int main() {
    void (*funcs[2])() = {func1, func2};
    
    for (int i = 0; i < 2; i++) {
        funcs[i](); // Вызов в цикле
    }
    return 0;
}
