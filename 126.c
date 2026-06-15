#include <stdio.h>

int main() {
    char data[] = "Иван 1998 4.5";
    char name[50];
    int year;
    float rating;
    
    sscanf(data, "%s %d %f", name, &year, &rating);
    printf("Имя: %s, Год: %d, Рейтинг: %.1f\n", name, year, rating);
    return 0;
}
