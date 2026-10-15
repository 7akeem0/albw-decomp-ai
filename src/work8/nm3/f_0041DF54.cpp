// 0x41DF54
extern "C" void func_0040E028(void*);
extern "C" void func_00111EF0(void*, void*);
extern "C" void func_00112364(void*, void*, void*);
struct Cls {
    void* m0;
    char pad1[0xf4 - 4];
    char mF4;
    char pad2[0x118 - 0xf5];
    void* m118;
    unsigned char m11C;
    unsigned char m11D;
    void f();
};
struct P14 { char* a; char* b; };
void Cls::f() {
    if (m11C != 0) {
        m11C = 0; m11D = 0;
        func_0040E028(this);
        char* p = (char*)m118;
        func_00111EF0(p + 8, (char*)this + 0xf4);
        void** vt = *(void***)this;
        ((void(*)(void*))vt[4])(this);
        char* a = p + 0x14; char* b = p + 0x18;
        func_00112364(a, b, (char*)this + 0xf4);
    }
}
