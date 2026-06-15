#include <stdio.h>

// Продолжительность хранения — статическая (программа инициализирует ее до входа в main)
int static_global_storage = 500; 

void increment_storage(void) {
    static_global_storage += 100;
}

int main(void) {
    printf("Старт: %d\n", static_global_storage); // 500
    increment_storage();
    printf("После инкремента: %d\n", static_global_storage); // 600
    return 0;
}
