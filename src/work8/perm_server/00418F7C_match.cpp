
extern "C" void* func_00414FF0(unsigned char);
extern "C" void func_00111EE4(void*, void*);
struct Cls {
    char pad0[0xd];
    unsigned char m0d;
    char pad1[1];
    unsigned char m0f;
    char pad2[0xa2 - 0x10];
    unsigned char m0a2;
    void f();
};
void Cls::f() {
    unsigned char x = m0a2; __schedule_barrier();
    m0f = 1;
    if (x != 0) {
        func_00111EE4(func_00414FF0(x), (char*)this + 0x50);
        m0a2 = 0;
    }
    if (m0d != 0) m0d = 0;
}
