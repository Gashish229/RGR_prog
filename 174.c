#include <stdio.h>

struct Student {
    char name[20]; // 20 байт
    int age;       // 4 байта
    float grade;   // 4 байта
};

int main(void) {
    struct Student s1 = {"Alex", 19, 4.75f};
    printf("Студент: %s, Возраст: %d, Балл: %.2f\n", s1.name, s1.age, s1.grade);
    return 0;
}
