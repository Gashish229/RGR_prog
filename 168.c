#include <stdio.h>

void merge_arrays(int *a, int size_a, int *b, int size_b, int *result) {
    int i = 0, j = 0, k = 0;

    while (i < size_a && j < size_b) {
        if (a[i] < b[j]) result[k++] = a[i++];
        else             result[k++] = b[j++];
    }
    // Докопирование остатков
    while (i < size_a) result[k++] = a[i++];
    while (j < size_b) result[k++] = b[j++];
}

int main(void) {
    int a[] = {1, 3, 5}, b[] = {2, 4, 6};
    int res[6];
    merge_arrays(a, 3, b, 3, res);

    for (int i = 0; i < 6; i++) printf("%d ", res[i]); // 1 2 3 4 5 6
    printf("\n");
}
