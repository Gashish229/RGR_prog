#include <stdio.h>

int main(void) {
    // Открытие файла на запись ("w" — write)
    FILE *file_ptr = fopen("test.txt", "w");

    // ОБЯЗАТЕЛЬНО: Проверка дескриптора на NULL
    if (file_ptr == NULL) {
        printf("Ошибка открытия файла!\n");
        return 1;
    }

    fprintf(file_ptr, "Hello, Sibsutis! Standard C11.");
    
    fclose(file_ptr); // Закрытие файлового потока
    return 0;
}
