#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

void update_age(struct Student *s, int new_age) {
    s->age = new_age;
}

int main() {
    struct Student st = {"Иван", 20};
    update_age(&st, 21);
    printf("Новый возраст: %d\n", st.age);
    return 0;
}
