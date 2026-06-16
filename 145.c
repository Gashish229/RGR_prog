#include <stdio.h>

double get_average(int arr[], int size) {
    if (size == 0) return 0.0;
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return (double)sum / size;
}

int main() {
    int arr[] = {2, 4, 6, 8};
    printf("Среднее: %.2f\n", get_average(arr, 4));
    return 0;
}
