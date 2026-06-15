#include <stdio.h>

int main(void) {
    int arr[] = {100, 200, 300};
    int *ptr = arr;

    // Цикл работает, пока адрес ptr меньше адреса конца массива
    while (ptr < arr + 3) {
        printf("%d ", *ptr); // Разыменовываем текущий адрес
        ptr++; // Сдвигаем на 4 байта вперед к следующей ячейке
    }
    printf("\n");
    return 0;
}
