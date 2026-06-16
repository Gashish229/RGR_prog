#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Person;

int compare_persons(const Person *p1, const Person *p2) {
    int name_cmp = strcmp(p1->name, p2->name);
    if (name_cmp != 0) return name_cmp;
    return p1->age - p2->age;
}

int main() {
    Person p1 = {"Иван", 30}, p2 = {"Иван", 25};
    int res = compare_persons(&p1, &p2);
    if (res == 0) printf("Люди одинаковые\n");
    else if (res > 0) printf("p1 больше p2\n");
    else printf("p1 меньше p2\n");
    return 0;
}
