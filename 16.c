#include <stdio.h>

int main(void) {
    int integer_val = 10;
    float float_val = 4.5f;

    // integer_val неявно приводится к 10.0f перед сложением 
    float result = integer_val + float_val; // Итог: 14.5f 

    printf("Результат операции: %f\n", result);
    return 0;
}