#include <stdio.h>
#include <unistd.h>

int main() {
    if (access("file.txt", F_OK) != -1) {
        printf("Файл существует.\n");
    } else {
        printf("Файл не существует.\n");
    }
    return 0;
}
