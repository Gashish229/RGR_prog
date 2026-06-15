#include <stdio.h>

int main(void) {
    FILE *file_ptr = fopen("test.txt", "r");
    if (file_ptr == NULL) return 1;

    int count = 0;
    while (fgetc(file_ptr) != EOF) {
        count++;
    }

    printf("Символов в файле: %d\n", count);
    fclose(file_ptr);
    return 0;
}
