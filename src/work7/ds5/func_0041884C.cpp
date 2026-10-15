// 0x41884C
extern "C" void func_00418498(void*, int);
extern "C" void func_003DE198(int, void*, void*);
struct Cls {
    unsigned char m0;
    void f();
};
void Cls::f() {
    if (m0 == 0) return;
    for (int i = 0; i < 2; i++) {
        func_00418498(this, i & 0xff);
        char* p = (char*)this + i * 4;
        func_003DE198((signed char)i, *(void**)(p + 0x6c), *(void**)(p + 0x274));
        *(void**)(p + 0x6c) = 0;
        *(void**)(p + 0x274) = 0;
    }
    m0 = 0;
}
