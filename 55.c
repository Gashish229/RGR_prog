#include <stdio.h>

int main(void) {
    int age = 20;
    int has_id = 1;

    if ((age >= 18 && has_id) || !(age < 100)) {
        printf("Доступ разрешен\n");
    }
    return 0;
}
