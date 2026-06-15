#include <stdio.h>
#include <stdbool.h>

bool is_math_palindrome(int num) {
    if (num < 0) return false;
    int original = num;
    int reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + (num % 10); // Наращивание разрядов перевернутого числа
        num /= 10;
    }
    return original == reversed;
}

int main(void) {
    int val = 12321;
    printf("Число %d палиндром: %s\n", val, is_math_palindrome(val) ? "Да" : "Нет");
    return 0;
}
