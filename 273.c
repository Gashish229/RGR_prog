unsigned int swap_bits(unsigned int num, int p1, int p2) {
    unsigned int bit1 = (num >> p1) & 1;
    unsigned int bit2 = (num >> p2) & 1;
    
    if (bit1 != bit2) {
        // Инвертируем оба бита
        num ^= (1U << p1) | (1U << p2);
    }
    return num;
}
