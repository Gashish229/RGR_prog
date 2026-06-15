#include <stdio.h>
#define IS_EVEN(x) (((x) % 2 == 0) ? 1 : 0)

int main() {
    if (IS_EVEN(4)) printf("Четное\n");
    return 0;
}
