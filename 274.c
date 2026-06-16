int count_set_bits(unsigned int num) {
    int count = 0;
    while (num) {
        num &= (num - 1); // Сбрасывает младший установленный бит
        count++;
    }
    return count;
}
