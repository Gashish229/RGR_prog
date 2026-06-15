#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        if (str[left] != str[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    char str[] = "madam";
    if (isPalindrome(str)) printf("Палиндром\n");
    else printf("Не палиндром\n");
    return 0;
}
