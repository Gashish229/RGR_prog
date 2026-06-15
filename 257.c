#include <stdio.h>
#include <setjmp.h>

jmp_buf buffer;

void calculate() {
    printf("Выполняем вычисления...\n");
    longjmp(buffer, 1); // Мгновенный "прыжок" обратно к setjmp
    printf("Этот код никогда не выполнится.\n");
}

int main() {
    if (setjmp(buffer) == 0) {
        printf("Блок try\n");
        calculate();
    } else {
        printf("Блок catch: поймано исключение!\n");
    }
    return 0;
}
