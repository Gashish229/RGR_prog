#include<stdio.h>
#define DEBUG_MODE

int main(void){
#ifndef DEBUG_MODE
    printf("[DEBUG]\n");
#endif
    printf("Основной код программы\n");
    return 0;
}