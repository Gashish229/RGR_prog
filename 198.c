#include <stdio.h>

#define ACTIVE_LOG_LEVEL 2 // 1: ERROR, 2: WARN, 3: INFO

#define LOG(level, msg) do { \
    if (level <= ACTIVE_LOG_LEVEL) { \
        printf("[LEVEL %d]: %s\n", level, msg); \
    } \
} while(0)

int main() {
    LOG(1, "Критическая ошибка!"); // Выведется
    LOG(3, "Обычная информация.");   // Не выведется
    return 0;
}
