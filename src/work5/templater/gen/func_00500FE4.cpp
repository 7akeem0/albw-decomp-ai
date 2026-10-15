typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct FL_500FE4 { u32 v; void set(u32 a) { v |= a; } void reset(u32 a) { v &= ~a; } void change(u32 a, u32 b) { v = (v | a) & ~b; } };
struct S_500FE4 { char pad59C[0x59C]; FL_500FE4 f; };
void f_500FE4(S_500FE4* p) { p->f.set(0x1000); }
