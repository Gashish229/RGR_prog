#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *p = arr; // Указывает на первый элемент
    
    printf("Первый: %d\n", *p);
    p++; // Сдвиг на следующий элемент типа int
    printf("Второй: %d\n", *p);
    return 0;
}
