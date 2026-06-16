#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month current = MAY;
    if (current >= MAR && current <= MAY) {
        printf("Сейчас весна\n");
    }
    return 0;
}
