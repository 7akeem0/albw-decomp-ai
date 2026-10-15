typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3C4EF8;
struct S1_3C4EF8;
struct S1_3C4EF8 { void g(); };
struct S0_3C4EF8 { char pad48[0x48]; S1_3C4EF8* m48; };
void f_3C4EF8(S0_3C4EF8* p) { p->m48->g(); }
