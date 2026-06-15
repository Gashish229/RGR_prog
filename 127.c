#include <stdio.h>

int main() {
    FILE *out = fopen("data.txt", "w");
    if (out) {
        fprintf(out, "%s %d", "Item", 42);
        fclose(out);
    }
    
    FILE *in = fopen("data.txt", "r");
    char name[20];
    int value;
    if (in) {
        fscanf(in, "%s %d", name, &value);
        printf("Прочитано: %s %d\n", name, value);
        fclose(in);
    }
    return 0;
}
