#include <stdio.h>

typedef struct {
    char name[50];
    char position[50];
    double salary;
} Employee;

void print_employee(const Employee *emp) {
    printf("Сотрудник: %s, Должность: %s, Зарплата: %.2f\n", 
           emp->name, emp->position, emp->salary);
}

int main() {
    Employee emp = {"Алексей", "Инженер", 120000.0};
    print_employee(&emp);
    return 0;
}
