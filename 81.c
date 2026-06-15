#include <stdio.h>

void executeCallback(void (*callback)()) {
    printf("Подготовка...\n");
    callback();
}

void myTask() {
    printf("Выполнение задачи!\n");
}

int main() {
    executeCallback(myTask);
    return 0;
}
