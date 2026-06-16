#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    struct Student students[2] = {
        {"Иван", 20, 4.5f},
        {"Анна", 19, 5.0f}
    };
    
    for (int i = 0; i < 2; i++) {
        printf("Имя: %s, Возраст: %d, Оценка: %.1f\n", 
               students[i].name, students[i].age, students[i].grade);
    }
    return 0;
}
