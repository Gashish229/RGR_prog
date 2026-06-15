#include <stdio.h>

void modify_element(int *val) { *val += 5; }

// Функция принимает массив, размер и указатель на модифицирующую функцию
void process_array(int *arr, int size, void (*modifier)(int*)) {
    for (int i = 0; i < size; i++) {
        modifier(&arr[i]); // Передаем адрес i-го элемента
    }
}

int main(void) {
    int data[] = {1, 2, 3};
    process_array(data, 3, modify_element);

    printf("Итог: %d %d %d\n", data[0], data[1], data[2]); // 6 7 8
    return 0;
}
