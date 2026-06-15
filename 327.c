#include <stdio.h>
#include <string.h>

void replace_substring(const char *source, const char *old_sub, const char *new_sub) {
    char buffer[1024] = {0}; // Выделенный результирующий буфер на стеке
    char *insert_point = buffer;
    const char *current = source;
    int old_len = strlen(old_sub);
    int new_len = strlen(new_sub);

    while (1) {
        // Ищем вхождение подстроки old_sub
        const char *next_match = strstr(current, old_sub);
        if (next_match == NULL) {
            strcpy(insert_point, current); // Докопируем остаток строки
            break;
        }
        // Копируем текст до найденного совпадения
        int bytes_to_copy = next_match - current;
        strncpy(insert_point, current, bytes_to_copy);
        insert_point += bytes_to_copy;

        // Вставляем новую подстроку new_sub
        strcpy(insert_point, new_sub);
        insert_point += new_len;

        current = next_match + old_len; // Сдвигаем рабочий указатель
    }
    printf("Результат замены: %s\n", buffer);
}

int main(void) {
    replace_substring("Sibsutis C99 standard", "C99", "C11");
    return 0;
}
