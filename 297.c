#include <stdio.h>

int main(void) {
    // Рекомендация компилятору поместить переменную напрямую в регистр процессора
    register int fast_counter = 0;

    for (int i = 0; i < 100000; i++) {
        fast_counter += i;
    }

    printf("Result: %d\n", fast_counter);
    
    // int *ptr = &fast_counter; 
    // ОБЪЯСНЕНИЕ ДЛЯ ДОСКИ: Строка выше вызовет ошибку компиляции!
    // У регистровых переменных синтаксически запрещено брать адрес через оператор амперсанда '&'.

    return 0;
}
