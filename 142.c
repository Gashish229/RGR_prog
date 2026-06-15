#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hello, world!";
    char *ptr = strstr(str, "world");
    if (ptr != NULL) printf("Найдено: %s\n", ptr);
    return 0;
}
