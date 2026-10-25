typedef unsigned char u8;
int f(const u8* a, const u8* b) {
    u8 c1, c2;
    for (;;) {
        c1 = *a++; c2 = *b++;
        if (c1 != c2 || c1 == 0) break;
        c1 = *a++; c2 = *b++;
        if (c1 != c2 || c1 == 0) break;
    }
    return c1 - c2;
}
