// 0x44395C
extern "C" int func_00532C78(void*);
extern "C" void func_0012C718(void*);
extern "C" void __attribute__((weak)) func_0066C9D0(void*, int);
struct Cls {
    char pad[0x74];
    char x74[0x64];
    unsigned char m0d8;
    void f();
};
void Cls::f() {
    if (func_00532C78((char*)this + 0xb8) != 0) return;
    if (m0d8 != 0) {
        func_0012C718(this);
        return;
    }
    func_0066C9D0((char*)this + 0x74, 2);
}
