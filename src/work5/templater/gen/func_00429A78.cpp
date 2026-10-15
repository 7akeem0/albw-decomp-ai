typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_429A78;
struct S1_429A78;
struct S1_429A78 { void g(); };
struct S0_429A78 { char pad34[0x34]; S1_429A78* m34; };
void f_429A78(S0_429A78* p) { p->m34->g(); }
