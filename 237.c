#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[30];
    float mark;
} Student;

int main(void) {
    int count = 2;
    // Массив структур на куче
    Student *list = (Student *)malloc(count * sizeof(Student));
    if (list == NULL) return 1;

    // Прямой доступ по индексу (сдвиг по памяти на величину sizeof(Student) * i)
    list[0].mark = 4.8f;
    list[0].name[0] = 'I'; list[0].name[1] = 'v'; list[0].name[2] = 'a'; list[0].name[3] = 'n'; list[0].name[4] = '\0';

    list[1].mark = 3.5f;
    list[1].name[0] = 'A'; list[1].name[1] = 'n'; list[1].name[2] = 'n'; list[1].name[3] = '\0';

    for (int i = 0; i < count; i++) {
        printf("Студент: %s, Оценка: %.1f\n", list[i].name, list[i].mark);
    }

    free(list);
    list = NULL;
    return 0;
}
