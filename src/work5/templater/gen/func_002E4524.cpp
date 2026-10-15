typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct FL_2E4524 { u32 v; void set(u32 a) { v |= a; } void reset(u32 a) { v &= ~a; } void change(u32 a, u32 b) { v = (v | a) & ~b; } };
struct S_2E4524 { char pad59C[0x59C]; FL_2E4524 f; };
void f_2E4524(S_2E4524* p) { p->f.reset(0x4000); }
