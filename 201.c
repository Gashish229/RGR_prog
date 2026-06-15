#include <stdio.h>

// __VA_ARGS__ подставляет все аргументы, переданные вместо троеточия
#define LOG_PRINT(format, ...) printf("[LOG] " format "\n", __VA_ARGS__)

int main(void) {
    int id = 42;
    // Передаем строку формата и переменную
    LOG_PRINT("Студент ID: %d успешно сдал билет", id); 
    return 0;
}
