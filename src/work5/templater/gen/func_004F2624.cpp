typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct FL_4F2624 { u32 v; void set(u32 a) { v |= a; } void reset(u32 a) { v &= ~a; } void change(u32 a, u32 b) { v = (v | a) & ~b; } };
struct S_4F2624 { char pad59C[0x59C]; FL_4F2624 f; };
void f_4F2624(S_4F2624* p) { p->f.set(0x4); }
