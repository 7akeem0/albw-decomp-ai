typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct FL_1246C4 { u32 v; void set(u32 a) { v |= a; } void reset(u32 a) { v &= ~a; } void change(u32 a, u32 b) { v = (v | a) & ~b; } };
struct S_1246C4 { char pad59C[0x59C]; FL_1246C4 f; };
void f_1246C4(S_1246C4* p) { p->f.reset(0x3); }
