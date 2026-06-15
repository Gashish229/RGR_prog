#include <stdio.h>

int main() {
    int mark;
    printf("Введите оценку (1-5): ");
    scanf("%d", &mark);
    switch(mark) {
        case 1: printf("Плохо\n"); break;
        case 2: printf("Неудовлетворительно\n"); break;
        case 3: printf("Удовлетворительно\n"); break;
        case 4: printf("Хорошо\n"); break;
        case 5: printf("Отлично\n"); break;
        default: printf("Неверная оценка\n");
    }
    return 0;
}
