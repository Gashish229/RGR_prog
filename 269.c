#include <stdio.h>
#include <stdint.h>

union Packet {
    uint32_t raw_data;
    struct {
        uint32_t flagA : 1;
        uint32_t flagB : 1;
        uint32_t value : 30;
    } fields;
};

int main() {
    union Packet p;
    p.raw_data = 5; // 0000...0101 в двоичном
    
    printf("Flag A (младший бит): %d\n", p.fields.flagA); // 1
    printf("Flag B: %d\n", p.fields.flagB);               // 0
    return 0;
}
