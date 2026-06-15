#include <stdio.h>

int main(void) {
    int n = 5;
    int arr[5]; // Статический массив на стеке

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
