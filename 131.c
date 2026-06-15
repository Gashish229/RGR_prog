#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Использование: %s <подстрока> <файл>\n", argv[0]);
        return 1;
    }
    
    FILE *f = fopen(argv[2], "r");
    if (!f) return 1;
    
    char line[512];
    while (fgets(line, sizeof(line), f)) {
        if (strstr(line, argv[1])) {
            printf("%s", line);
        }
    }
    fclose(f);
    return 0;
}
