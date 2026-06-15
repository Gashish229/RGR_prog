#include <stdio.h>

void test_variables(void) {
    auto int auto_var = 0;   // Автоматическая переменная (на стеке)
    static int static_var = 0; // Статическая переменная (в сегменте Data)

    auto_var++;
    static_var++;

    printf("auto: %d, static: %d\n", auto_var, static_var);
}

int main(void) {
    test_variables(); // auto: 1, static: 1
    test_variables(); // auto: 1, static: 2
    return 0;
}
