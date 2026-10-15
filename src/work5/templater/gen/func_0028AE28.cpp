typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_28AE28;
struct M_28AE28;
struct M_28AE28 { void g(); };
struct S0_28AE28 { char pad5C0[0x5C0]; M_28AE28 m5C0; };
void f_28AE28(S0_28AE28* p) { p->m5C0.g(); }
