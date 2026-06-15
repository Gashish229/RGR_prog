#include <stdio.h>

int main(void) {
    int arr[] = {5, 10, 15, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Явное приведение типов (int -> float) во избежание усечения результата
    float average = (float)sum / size;

    printf("Среднее значение: %.2f\n", average);
    return 0;
}
