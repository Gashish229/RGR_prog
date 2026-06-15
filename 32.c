#include <stdio.h>

int main() {
    char ch = 'A';
    switch (ch) {
        case 'A': case 'E': case 'I': case 'O': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Гласная\n");
            break;
        default:
            printf("Согласная или другой символ\n");
    }
    return 0;
}
