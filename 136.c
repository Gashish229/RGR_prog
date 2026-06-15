#include <stdio.h>

int main() {
    int a = 5, b = 10;
    
    // С помощью XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("a = %d, b = %d\n", a, b); // a = 10, b = 5
    return 0;
}
