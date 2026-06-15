#include <stdio.h>

int main(void) {
    int choice = 2;

    switch (choice) {
        case 1: printf("Action 1\n"); break;
        case 2: printf("Action 2\n"); break; // Программа перейдет сюда
        case 3: printf("Action 3\n"); break;
    }
    return 0;
}
