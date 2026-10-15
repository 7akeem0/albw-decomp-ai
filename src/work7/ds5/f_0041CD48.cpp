// 0x41CD48
extern "C" void func_004149E4(void*);
extern "C" void func_0041497C(void*);
extern "C" void* func_00417E24();
extern "C" void func_00417F50(void*, void*);
struct Cls {
    char pad0[0x130];
    unsigned char m130;
    unsigned char m131;
    unsigned char m132;
    char pad1[0x198 - 0x133];
    void (*m198)(void*, int, void*);
    void* m19c;
    void* m1a0;
    void f();
};
void Cls::f() {
    if (m1a0 == 0) return;
    func_004149E4(m1a0);
    func_0041497C(m1a0);
    void (*cb)(void*, int, void*) = m198;
    m1a0 = 0;
    m130 = 0;
    m131 = 0;
    if (cb) cb(this, 0, m19c);
    if (m132 != 0) {
        m132 = 0;
        void* r = func_00417E24();
        func_00417F50(r, this);
    }
}
