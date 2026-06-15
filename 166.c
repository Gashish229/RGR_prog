#include <stdio.h>

int main(void) {
    int arr[] = {1, 2, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int is_palindrome = 1;

    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    printf("Массив %s палиндромом\n", is_palindrome ? "является" : "не является");
    return 0;
}
