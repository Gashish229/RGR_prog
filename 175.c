#include <stdio.h>

struct Student {
    char name[20];
    int age;
    float grade;
};

int main(void) {
    // Массив из двух структур на стеке
    struct Student group[2] = {
        {"Ivan", 20, 4.2f},
        {"Oleg", 19, 4.9f}
    };

    for (int i = 0; i < 2; i++) {
        printf("Студент %d: %s, Балл: %.1f\n", i, group[i].name, group[i].grade);
    }
    return 0;
}
