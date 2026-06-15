#include <stdio.h>

int main(void) {
    int x = 10, y = 10;
    
    int a = ++x; // x стало 11, затем записалось в a. (a = 11, x = 11) 
    int b = y++; // Старое y (10) записалось в b, затем y стало 11. (b = 10, y = 11) 

    printf("Префикс (++x): a = %d, x = %d\n", a, x);
    printf("Постфикс (y++): b = %d, y = %d\n", b, y);
    return 0;
}