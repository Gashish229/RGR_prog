#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    
    int num = atoi(argv[1]);
    unsigned long long factual = 1; // Защита от переполнения

    for (int i = 1; i <= num; i++) {
        factual *= i;
    }
    printf("Факториал %d = %llu\n", num, factual);
    return 0;
}
