#include <stdio.h>

int main() {
    char str[] = "  a b   c d  ";
    int j = 0;
    
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("Без пробелов: '%s'\n", str);
    return 0;
}
