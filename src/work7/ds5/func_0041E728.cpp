// 0x41E728
unsigned func_0041E728(unsigned n) {
    unsigned r = (n + 7) >> 3;
    r += 3;
    r &= ~3u;
    return r + (n << 5) + 0x44;
}
