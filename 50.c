#include <stdio.h>
#include <string.h>

void remove_vowels(char *str) {
    int j = 0;
    char vowels[] = "aAeEiIoOuUyYаАеЕёЁиИоОуУыЫэЭюЮяЯ"; // Учет латиницы и кириллицы
    
    for(int i = 0; str[i] != '\0'; i++) {
        if(!strchr(vowels, str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[] = "Hello World! Привет Мир!";
    remove_vowels(str);
    printf("Без гласных: %s\n", str);
    return 0;
}
