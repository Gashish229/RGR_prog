#include <stdio.h>

int main() {
    char a = 'A';
    char b = 'Z';
    if (a < b) {
        printf("'%c' стоит в алфавите перед '%c'\n", a, b);
    }
    return 0;
}
