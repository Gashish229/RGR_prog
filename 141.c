#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "programming";
    char *ptr = strchr(str, 'm');
    if (ptr != NULL) printf("Символ найден на позиции: %ld\n", ptr - str);
    return 0;
}
