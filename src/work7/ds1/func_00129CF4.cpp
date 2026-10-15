typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;

extern "C" void func_004FAD90(void*);
extern "C" void func_00656A1C(void*, u32) __attribute__((weak));
extern "C" void func_004FC570(void*);

struct S {
    u8 pad0[0x510];
    u8* m510;
    u8 pad1[0x97b - 0x514];
    u8 m97b;
    u8 m97c;
    void f();
};

void S::f() {
    func_004FAD90(this);
    if (*(u8*)(m510 + 4) != 0) return;
    m97b = 0;
    s16 v = *(s16*)((u8*)this + 0x508);
    if (v <= 0) {
        func_00656A1C((u8*)this + 0x8bc, 7);
        return;
    }
    u32 n = (m97c == 0) ? 5 : 3;
    func_00656A1C((u8*)this + 0x8bc, n);
    func_004FC570(this);
}
