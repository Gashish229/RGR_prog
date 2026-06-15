#include <stdio.h>

void sayHello() {
    printf("Привет от указателя на функцию!\n");
}

int main() {
    void (*funcPtr)() = sayHello; // Объявление указателя
    funcPtr(); // Вызов функции через указатель
    return 0;
}
