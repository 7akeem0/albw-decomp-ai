// 0x41A6E8
struct Cls {
    char pad[0x100];
    unsigned int m100;
    void f(unsigned mask, float v);
};
void Cls::f(unsigned mask, float v) {
    for (unsigned i = 0; i < m100 && mask != 0; ++i, mask >>= 1) {
        if (mask & 1) *(float*)((char*)this + i * 0x24 + 0x1b1c) = v;
    }
}
