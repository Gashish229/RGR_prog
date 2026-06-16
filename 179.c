#include <stdio.h>

struct Address {
    char city[50];
    char street[50];
};

struct Student {
    char name[50];
    int age;
    struct Address address; // Вложенная структура
};

int main() {
    struct Student st = {"Иван", 20, {"Москва", "Арбат"}};
    printf("Студент из города: %s\n", st.address.city);
    return 0;
}
