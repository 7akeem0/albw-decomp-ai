// 0x46A25C
extern "C" void func_00231340(void*);
extern "C" int func_00532C78(void*);
extern "C" void func_0066DDF4(void*, int) ;
struct Cls {
    char pad1[0x14];
    void* m14;
    void f();
};
void Cls::f() {
    unsigned short v = *(unsigned short*)((char*)m14 + 0x16);
    if (v & 8) {
        func_00231340((char*)this + 0x38);
        func_0066DDF4((char*)this + 0x50, 1);
    } else {
        if (func_00532C78((char*)this + 0x38) == 0)
            func_0066DDF4((char*)this + 0x50, 0);
    }
}
