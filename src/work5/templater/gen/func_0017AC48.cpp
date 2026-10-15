typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct FL_17AC48 { u32 v; void set(u32 a) { v |= a; } void reset(u32 a) { v &= ~a; } void change(u32 a, u32 b) { v = (v | a) & ~b; } };
struct S_17AC48 { char pad8AC[0x8AC]; FL_17AC48 f; };
void f_17AC48(S_17AC48* p) { p->f.reset(0x1); }
