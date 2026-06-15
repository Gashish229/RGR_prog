#include <stdio.h>

int main(void) {
    FILE *file_ptr = fopen("test.txt", "r");
    if (file_ptr == NULL) return 1;

    while (1) {
        int ch = fgetc(file_ptr);
        
        // feof() возвращает истину только ПОСЛЕ попытки чтения за концом файла
        if (feof(file_ptr)) {
            break;
        }
        putchar(ch);
    }

    fclose(file_ptr);
    return 0;
}
