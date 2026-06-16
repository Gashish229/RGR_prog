#include <stdio.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
    printf("Размер массива: %zu\n", ARRAY_SIZE(numbers));
    return 0;
}
