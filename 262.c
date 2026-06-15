#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w+");
    fputs("Hello World!", file);
    
    fpos_t pos;
    rewind(file);
    fgetpos(file, &pos); // Сохраняем начало файла
    
    fgetc(file); // Читаем один символ (H)
    fsetpos(file, &pos); // Возвращаемся в сохраненную позицию
    
    printf("Символ после возврата: %c\n", fgetc(file)); // Снова 'H'
    fclose(file);
    return 0;
}
