#include <stdio.h>

size_t custom_strlen(const char *str) {
    size_t length = 0;
    while(str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    printf("Длина строки: %zu\n", custom_strlen("Привет"));
    return 0;
}
