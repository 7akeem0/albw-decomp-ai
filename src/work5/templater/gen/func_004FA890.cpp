typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct FL_4FA890 { u32 v; void set(u32 a) { v |= a; } void reset(u32 a) { v &= ~a; } void change(u32 a, u32 b) { v = (v | a) & ~b; } };
struct S_4FA890 { char pad58C[0x58C]; FL_4FA890 f; };
void f_4FA890(S_4FA890* p) { p->f.reset(0x60); }
