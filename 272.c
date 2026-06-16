unsigned int toggle_bit(unsigned int num, int pos) {
    return num ^ (1U << pos);
}
