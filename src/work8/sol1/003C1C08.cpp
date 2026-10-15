

typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern "C" void func_001164C4(void*, u32, s32);
static void ctx_003C1C08_0(void* a0,u32 a1,s32 a2){void* copy0=a0;a0=copy0;u32 copy1=a1;a1=copy1;s32 copy2=a2;a2=copy2;func_001164C4(a0,a1,a2);}

extern "C" void func_003CB5F0(void*, s32, s32);
struct Obj {
    u8 pad0[0x3c];
    void* m3c;
    u8 pad1[0x70 - 0x40];
    f32 m70;
    u8 pad2[0x84 - 0x74];
    u32 m84;
    u8 pad3[0x188 - 0x88];
    u32 m188;
    u8 pad4[0x18e - 0x18c];
    u8 m18e;
    void f(s32 a);
};
void Obj::f(s32 a) {
    if (m18e == 0) return;
    if (a != 0) {
        if ((s32)(m188 << 3) < 0) return;
        ctx_003C1C08_0(m3c, m84, 0xff);
        return;
    }
    if (m188 & 0x10000000) {
        func_003CB5F0((char*)this + 0x3c, 3, 0);
        return;
    }
    m70 = 1.0f;
    func_003CB5F0((char*)this + 0x3c, 2, 0);
}
