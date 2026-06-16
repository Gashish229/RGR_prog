#include <stdio.h>

int get_max(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

int main() {
    int arr[] = {3, 8, 2, 5};
    printf("Максимум: %d\n", get_max(arr, 4));
    return 0;
}
