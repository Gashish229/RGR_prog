#include <stdio.h>
#include <stdlib.h>
#include <alloca.h> // Специфичный заголовок для alloca

void demonstrate_alloca(void) {
    // Выделение 40 байт динамически на СТЕКЕ, а не в куче
    int *stack_dynamic_arr = (int *)alloca(10 * sizeof(int));
    
    stack_dynamic_arr[0] = 42;
    printf("Стековый динамический: %d\n", stack_dynamic_arr[0]);
    
    // ВАЖНО: Вызывать free() для памяти из alloca() КАТЕГОРИЧЕСКИ ЗАПРЕЩЕНО.
    // Память очистится сама автоматически при сносе кадра стека функции!
}

int main(void) {
    demonstrate_alloca();
    return 0;
}
