#include <stdio.h>

size_t get_length(const char *str) {
    size_t len = 0;
    while (str[len]) len++;
    return len;
}

int main() {
    printf("Длина: %zu\n", get_length("Test string"));
    return 0;
}
