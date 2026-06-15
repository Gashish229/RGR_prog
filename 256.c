#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handle_sigint(int sig) {
    printf("\nПойман сигнал %d (Ctrl+C). Безопасный выход...\n", sig);
    exit(0);
}

int main() {
    signal(SIGINT, handle_sigint);
    printf("Программа работает. Нажмите Ctrl+C для выхода.\n");
    while(1) { sleep(1); } // Бесконечный цикл
    return 0;
}
