#include <stdio.h>

int main(void) {
    int arr[] = {4, 2, 7, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int has_duplicates = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                has_duplicates = 1;
                break;
            }
        }
        if (has_duplicates) break;
    }

    printf("Дубликаты %s\n", has_duplicates ? "найдены" : "не найдены");
    return 0;
}
