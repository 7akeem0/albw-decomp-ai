// 0x451050
struct Cls {
    char pad0[0xe8];
    unsigned int m0e8;
    char pad1[0xf0 - 0xec];
    void* m0f0;
    char pad2[0x154 - 0xf4];
    unsigned char m154;
    unsigned char m155;
    void* f();
};
void* Cls::f() {
    unsigned char a = m155;
    unsigned int b = m0e8;
    if ((a >> 6) == 1) {
        unsigned int t = m154 + ((a >> 2) & 3);
        if (b > t) return ((void**)m0f0)[t];
        return 0;
    }
    unsigned int t = a & 3;
    if (b > t) return ((void**)m0f0)[t];
    return 0;
}
