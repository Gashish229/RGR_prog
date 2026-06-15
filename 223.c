#include <stdlib.h>

void leak_function(void) {
    // Выделяем 400 байт на Куче
    int *leak_ptr = (int *)malloc(100 * sizeof(int)); 
    
    // Функция завершается. Локальный указатель leak_ptr стирается со СТЕКА.
    // Адрес куска памяти утерян навсегда, free() вызвать невозможно.
}

int main(void) {
    for (int i = 0; i < 10000; i++) {
        leak_function(); // Программа циклически теряет системную память ОС
    }
    return 0;
}
