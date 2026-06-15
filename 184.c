#include <stdio.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    int num;

    if (in != NULL && out != NULL) {
        while (fscanf(in, "%d", &num) == 1) {
            if (num % 2 == 0) fprintf(out, "%d\n", num);
        }
        fclose(in);
        fclose(out);
    }
    return 0;
}
