#include <stdio.h>

void loop_static_demo(void) {
    for (int i = 0; i < 3; i++) {
        static int count = 0; // Инициализируется 1 раз при старте программы
        count++;
        printf("%d ", count);
    }
}

int main(void) {
    loop_static_demo(); // Выведет: 1 2 3
    printf("\n");
    loop_static_demo(); // Выведет: 4 5 6
    printf("\n");
    return 0;
}
