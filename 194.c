#include <stdio.h>

#define DEBUG_MODE 1

#if DEBUG_MODE
    #define DEBUG_PRINT(fmt, ...) printf("DEBUG: " fmt "\n", ##__VA_ARGS__)
#else
    #define DEBUG_PRINT(fmt, ...) // Ничего не делает
#endif

int main() {
    int value = 42;
    DEBUG_PRINT("Значение переменной: %d", value);
    return 0;
}
