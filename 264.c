#include <stdio.h>

int main() {
    FILE *file = fopen("contacts.txt", "a");
    char name[50], phone[20];
    printf("Имя: "); scanf("%49s", name);
    printf("Телефон: "); scanf("%19s", phone);
    fprintf(file, "%s - %s\n", name, phone);
    fclose(file);
    return 0;
}
