#include <stdio.h>

int main(void) {
    int arr[] = {8, 3, 19, -2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0], max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}
