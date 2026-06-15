#include <stdio.h>

int main() {
    int arr[] = {7, 1, 4, 0, 9};
    int min = arr[0];
    
    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Минимум: %d\n", min);
    return 0;
}
