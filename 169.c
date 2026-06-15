#include <stdio.h>

int main(void) {
    int arr[] = {10, 20, 30};
    int *ptr = arr; // ptr указывает на arr[0]

    printf("Адрес ptr: %p, значение: %d\n", (void*)ptr, *ptr);

    ptr++; // Сдвиг указателя вперед на 1 элемент типа int

    // Адрес увеличился ровно на 4 байта, а не на 1!
    printf("Адрес после ptr++: %p, значение: %d\n", (void*)ptr, *ptr); 
    return 0;
}
