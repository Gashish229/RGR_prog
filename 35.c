#include <stdio.h>

union FloatView {
    float f;
    unsigned int i;
};

int main() {
    union FloatView num;
    num.f = -1.5f;
    printf("Float: %f\n", num.f);
    printf("Внутреннее представление (Hex): 0x%08X\n", num.i);
    return 0;
}
