#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "r");
    if (!file) return 1;
    char word[256];
    int count = 0;
    while (fscanf(file, "%255s", word) == 1) {
        count++;
    }
    printf("Слов: %d\n", count);
    fclose(file);
    return 0;
}
