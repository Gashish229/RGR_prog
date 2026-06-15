#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "HeLlO WoRlD";
    for(int i = 0; str[i] != '\0'; i++) {
        if(islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if(isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
    printf("Результат: %s\n", str);
    return 0;
}
