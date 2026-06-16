#include <stdio.h>

typedef struct {
    char model[50];
    int year;
} Car;

int main() {
    Car myCar = {"Toyota", 2020};
    printf("Авто: %s (%d)\n", myCar.model, myCar.year);
    return 0;
}
