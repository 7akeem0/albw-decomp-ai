typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct FL_21E0BC { u32 v; void set(u32 a) { v |= a; } void reset(u32 a) { v &= ~a; } void change(u32 a, u32 b) { v = (v | a) & ~b; } };
struct S_21E0BC { char pad59C[0x59C]; FL_21E0BC f; };
void f_21E0BC(S_21E0BC* p) { p->f.set(0x1000); }
