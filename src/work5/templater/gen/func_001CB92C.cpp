typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct FL_1CB92C { u32 v; void set(u32 a) { v |= a; } void reset(u32 a) { v &= ~a; } void change(u32 a, u32 b) { v = (v | a) & ~b; } };
struct S_1CB92C { char pad8AC[0x8AC]; FL_1CB92C f; };
void f_1CB92C(S_1CB92C* p) { p->f.reset(0x8); }
