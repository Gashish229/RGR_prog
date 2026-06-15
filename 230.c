#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    int age;
} Person;

int main(void) {
    // Выделение памяти под один экземпляр структуры в куче
    Person *p = (Person *)malloc(sizeof(Person));
    if (p == NULL) return 1;

    // Доступ к полям структуры через указатель осуществляется строго через оператор "->", а не "."
    p->age = 20;
    // Посимвольное заполнение строки
    p->name[0] = 'M'; p->name[1] = 'a'; p->name[2] = 'x'; p->name[3] = '\0';

    printf("Имя: %s, Возраст: %d\n", p->name, p->age);

    free(p);
    p = NULL;
    return 0;
}
