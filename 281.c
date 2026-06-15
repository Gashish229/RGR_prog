#include <stdio.h>
#include <stdbool.h>

bool is_power_of_two(int num) {
    if (num <= 0) return false;
    // Битовая проверка степени двойки
    return (num & (num - 1)) == 0;
}

int main(void) {
    int test_val = 16;
    printf("Число %d %s степенью двойки.\n", test_val, 
            is_power_of_two(test_val) ? "является" : "не является");
    return 0;
}
