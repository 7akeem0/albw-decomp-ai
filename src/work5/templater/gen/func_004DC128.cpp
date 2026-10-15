typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct FL_4DC128 { u32 v; void set(u32 a) { v |= a; } void reset(u32 a) { v &= ~a; } void change(u32 a, u32 b) { v = (v | a) & ~b; } };
struct S_4DC128 { char pad8AC[0x8AC]; FL_4DC128 f; };
void f_4DC128(S_4DC128* p) { p->f.reset(0x2); }
