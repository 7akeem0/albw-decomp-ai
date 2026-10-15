// 0x3E3BB4
extern "C" void* func_0010AF18(void*);
extern "C" void func_003E3E60(void*, void*);
struct Cls {
    int m0;
    int m4;
    int m8;
    char pad[0x10 - 0xc];
    int m10;
    int m14;
    int m18;
    void f();
};
void Cls::f() {
    void* r = func_0010AF18(this);
    func_003E3E60(r, this);
    int flags = m8;
    if ((flags & 0x70) == 0) {
        m8 = -1;
    } else {
        if ((flags & 0x20) == 0) m4 = m0;
        m8 = flags & 7;
    }
    m18 &= 7;
    if (m0 == 0) m8 = -1;
    if (m4 == 0) m8 = -1;
    if (m10 == 0) m18 = -1;
    m14 = m10;
}
