#include <stdio.h>
#include <float.h>

int main() {
    float max = FLT_MAX;
    printf("Максимум float: %e\n", max);
    printf("Переполнение (max * 2): %e\n", max * 2.0f);
    return 0;
}
