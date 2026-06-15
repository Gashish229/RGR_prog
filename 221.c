#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) return 1;

    free(ptr); // Первое корректное освобождение
    
    // free(ptr); 
    // ОБЯСНЕНИЕ ДЛЯ ДОСКИ: Если раскомментировать строку выше, возникнет критическая ошибка 
    // выполнения "Double Free" и менеджер памяти ОС немедленно аварийно завершит программу.

    return 0;
}
