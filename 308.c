#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;

    int max = atoi(argv[1]);
    for (int i = 2; i < argc; i++) {
        int current = atoi(argv[i]);
        if (current > max) {
            max = current;
        }
    }
    printf("Максимум: %d\n", max);
    return 0;
}
