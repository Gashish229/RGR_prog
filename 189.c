#include <stdio.h>
#define LOG_POS() printf("Ошибка в файле %s на строке %d\n", __FILE__, __LINE__)

int main() {
    LOG_POS();
    return 0;
}
