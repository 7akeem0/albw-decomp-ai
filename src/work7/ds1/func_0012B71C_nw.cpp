typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef float f32;

extern "C" void func_004FB064(void*);
extern "C" void func_004FB0D8(void*, void*);
extern "C" u32 func_00521060(void*);
extern "C" void func_00656B60(void*, u32) ;

struct S {
    u8 pad0[0x3e0];
    f32 m3e0;
    u8 pad1[0x8bc - 0x3e4];
    s32 m8bc;
    void f();
};

void S::f() {
    func_004FB064(this);
    m3e0 = m3e0 - 0.01f;
    func_004FB0D8(this, &m3e0);
    if (m8bc >= 0x2d && func_00521060(this) != 0) {
        func_00656B60((u8*)this + 0x8bc, 4);
    }
}
