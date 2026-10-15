typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_26E024;
struct S1_26E024;
struct S1_26E024 { void g(); };
struct S0_26E024 { char pad1434[0x1434]; S1_26E024* m1434; };
void f_26E024(S0_26E024* p) { p->m1434->g(); }
