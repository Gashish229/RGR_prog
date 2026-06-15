#include<stdio.h>
#define PRINT_VAR(x) printf("Переменная %s = %d\n", #x, x)
int main(void)
{
    int z = 100;
    PRINT_VAR(z);
    return 0;
}