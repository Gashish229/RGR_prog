#include <stdio.h>

int main(void) 
{
    printf("char: %zu byte\n", sizeof(char));     // 1 байт [cite: 490]
    printf("int: %zu bytes\n", sizeof(int));       // Обычно 4 байта [cite: 490]
    printf("float: %zu bytes\n", sizeof(float));   // 4 байта [cite: 490]
    printf("double: %zu bytes\n", sizeof(double)); // 8 байт [cite: 490]
    return 0;
}