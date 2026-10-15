#pragma O2
#pragma Otime
typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Self { u32 m0; void* m4; };

u32 func_0056AC10(void* p);
u32 func_0056AC60(u32 p, u32 k);
u32 func_0056ABC4(u32 p);
void func_001163A0(void* d, u32 s, u32 n);
void func_0058FBB8(void* d, u32 s);

bool func_0056C954(Self* s, void* a1, void* a2, u32 a3) {
    void* q2 = a2;
    void* q1 = a1;
    u32 r = func_0056ABC4(func_0056AC60(func_0056AC10(s->m4), a3));
    if (r == 0) return false;
    func_001163A0(q1, r, 0x26);
    func_0058FBB8(q2, r + 0x26);
    return true;
}
