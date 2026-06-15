#include <stdio.h>
#include <time.h>

int main() {
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    // Форматирование: ДД.ММ.ГГГГ ЧЧ:ММ:СС
    strftime(buffer, sizeof(buffer), "%d.%m.%Y %H:%M:%S", timeinfo);
    printf("Текущее время: %s\n", buffer);
    return 0;
}
