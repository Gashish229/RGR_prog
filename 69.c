#include <stdio.h>

int main(void) {
    int password;
    int attempts = 3;

    while (attempts > 0) {
        printf("Enter password (attempts left: %d): ", attempts);
        scanf("%d", &password);

        if (password == 1111) {
            printf("Access granted\n");
            return 0;
        }
        attempts--;
    }
    printf("Access denied. Blocked.\n");
    return 1;
}
