#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    printf("Введите имя: ");
    
    if (fgets(name, sizeof(name), stdin) != NULL) {
        // Находим символ '\n' и заменяем его на нуль-терминатор
        name[strcspn(name, "\n")] = '\0';
        printf("Привет, [%s]!\n", name);
    }
    return 0;
}
