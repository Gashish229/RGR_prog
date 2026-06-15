#include <stdio.h>

void *myMemcpy(void *dest, const void *src, size_t n) {
    char *d = (char *)dest;
    const char *s = (const char *)src;
    while (n--) *d++ = *s++;
    return dest;
}

int main() {
    int src[] = {1, 2, 3};
    int dest[3];
    myMemcpy(dest, src, sizeof(src));
    printf("%d %d %d\n", dest[0], dest[1], dest[2]);
    return 0;
}
