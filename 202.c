#include <stdio.h>

#define LOG_INFO  1
#define LOG_ERROR 2
#define CURRENT_LEVEL LOG_INFO

#define LOG(level, msg) \
    if (level >= CURRENT_LEVEL) printf("[%s] %s\n", #level, msg)

int main(void) {
    LOG(LOG_INFO, "Система инициализирована.");  // Выведется
    LOG(LOG_ERROR, "Критический сбой памяти!"); // Выведется
    return 0;
}
