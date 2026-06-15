#include <stdio.h>

void counter_demonstration(void) {
    // Статическая локальная переменная
    static int call_count = 0; 
    
    call_count++;
    printf("Функция вызвана %d раз(а).\n", call_count);
}

int main(void) {
    counter_demonstration(); // Выведет 1
    counter_demonstration(); // Выведет 2
    counter_demonstration(); // Выведет 3
    return 0;
}
