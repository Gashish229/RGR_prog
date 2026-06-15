#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Education";
    int count = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower((unsigned char)str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    printf("Гласных: %d\n", count);
    return 0;
}
