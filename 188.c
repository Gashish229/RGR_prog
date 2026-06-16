#include <stdio.h>
#include <stdbool.h>

typedef struct { int day, month, year; } Date;

bool is_valid_date(Date d) {
    if (d.year < 1 || d.month < 1 || d.month > 12 || d.day < 1) return false;
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Високосный год
    if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0)) {
        days_in_month[2] = 29;
    }
    return d.day <= days_in_month[d.month];
}

int main() {
    Date d1 = {29, 2, 2024};
    printf("Дата %d.%d.%d корректна? %s\n", d1.day, d1.month, d1.year, is_valid_date(d1) ? "Да" : "Нет");
    return 0;
}
