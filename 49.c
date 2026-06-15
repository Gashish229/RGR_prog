#include <stdio.h>

int main() {
    int a = 42;
    int *p = &a;
    int **pp = &p;
    
    printf("Значение a через двойной указатель: %d\n", **pp);
    return 0;
}
