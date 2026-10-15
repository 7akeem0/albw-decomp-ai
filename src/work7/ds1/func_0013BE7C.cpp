typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

extern "C" void func_0060C73C(void*, u32);
extern "C" u32 func_005211BC(void*, f32, f32);
extern "C" u32 func_004C15CC(void*);
extern "C" void func_0060C57C(void*, u32, u32);

struct S {
    u8 pad0[0x984];
    u32 m984;
    u8 m988;
    u8 m989;
    void f();
};

void S::f() {
    func_0060C73C(this, 1);
    if (m989 == 0) return;
    if (func_005211BC(this, 3.0f, 0.0f) != 0) return;
    if (func_004C15CC(this) == 0) return;
    u32 arg = m989;
    S* self = this;
    if (arg != 0) {
        if (arg == 1) arg = 5;
        else if (arg == 2) arg = 6;
        else if (arg == 3) arg = 8;
        else arg = m984;
    }
    func_0060C57C(self, arg, 0);
}
