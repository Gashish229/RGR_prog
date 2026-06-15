#include <stdio.h>

int main(void) {
    const int target = 100;
    
    // Попытка явного изменения:
    // target = 200; 
    
    // ОБЪЯСНЕНИЕ ДЛЯ ЭКЗАМЕНА: Если раскомментировать строку выше, компилятор прервет сборку
    // с критической ошибкой "error: assignment of read-only variable".
    
    printf("Значение константы: %d\n", target);
    return 0;
}