#include <stdio.h>

int find_most_frequent(const int *arr, int size) {
    int most_freq = arr[0];
    int max_count = 0;

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) count++;
        }
        if (count > max_count) {
            max_count = count;
            most_freq = arr[i];
        }
    }
    return most_freq;
}

int main(void) {
    int dataset[] = {1, 3, 2, 3, 4, 3, 2};
    printf("Частый элемент: %d\n", find_most_frequent(dataset, 7)); // 3
    return 0;
}
