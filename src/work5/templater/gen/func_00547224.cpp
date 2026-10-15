typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_547224;
struct S1_547224;
struct S1_547224 { void g(); };
struct S0_547224 { char pad3C[0x3C]; S1_547224* m3C; };
void f_547224(S0_547224* p) { p->m3C->g(); }
