#include <stdio.h>

int main(void) {
    int password;
    const int correct_password = 2026;

    while (1) {
        printf("Введите числовой пароль: ");
        if (scanf("%d", &password) != 1) {
            // Очистка буфера ввода при некорректном (не числовом) вводе
            while (getchar() != '\n'); 
            continue;
        }

        if (password == correct_password) {
            printf("Доступ разрешен.\n");
            break;
        }
        printf("Неверно!\n");
    }
    return 0;
}
