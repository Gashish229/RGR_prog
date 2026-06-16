#include <stdio.h>

#define ARRAY_INIT(arr, val) do { \
    size_t size = sizeof(arr) / sizeof((arr)[0]); \
    for (size_t i = 0; i < size; ++i) { \
        (arr)[i] = (val); \
    } \
} while(0)

int main() {
    int data[5];
    ARRAY_INIT(data, 7);
    for(int i = 0; i < 5; i++) printf("%d ", data[i]);
    return 0;
}
