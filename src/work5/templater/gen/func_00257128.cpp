typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_257128;
struct S1_257128;
struct S1_257128 { void g(); };
struct S0_257128 { char pad18[0x18]; S1_257128* m18; };
void f_257128(S0_257128* p) { p->m18->g(); }
