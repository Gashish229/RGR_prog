#include <stdio.h>

// Определение масок через сдвиги
#define FLAG_RUNNING (1 << 0) // 0001
#define FLAG_PAUSED  (1 << 1) // 0010
#define FLAG_ERROR   (1 << 2) // 0100

int main(void) {
    unsigned char system_state = 0; // Изначально все флаги сброшены

    // Устанавливаем флаги RUNNING и ERROR через побитовое ИЛИ (|)
    system_state |= FLAG_RUNNING;
    system_state |= FLAG_ERROR;

    // Проверяем наличие флага ERROR через побитовое И (&)
    if (system_state & FLAG_ERROR) {
        printf("В системе зарегистрирована ошибка выполнения!\n");
    }
    return 0;
}
