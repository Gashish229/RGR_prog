#include <stdio.h>

unsigned int pack_date(int day, int month, int year) {
    unsigned int packed = 0;
    packed |= (day & 0x1F);          // 5 бит под день (1-31)
    packed |= ((month & 0x0F) << 5);  // 4 бита под месяц (1-12) со сдвигом на 5
    packed |= ((year & 0xFFFF) << 9); // 16 бит под год со сдвигом на 9
    return packed;
}

int main(void) {
    unsigned int date = pack_date(15, 6, 2026);
    printf("Упакованная дата в 32 бита: 0x%X\n", date);
    return 0;
}
