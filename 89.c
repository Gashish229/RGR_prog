#include <stdio.h>
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

int main() {
    double myArray[] = {1.1, 2.2, 3.3, 4.4};
    printf("Элементов в массиве: %zu\n", ARRAY_SIZE(myArray));
    return 0;
}
