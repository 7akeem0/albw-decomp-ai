typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_554D78;
struct S1_554D78;
struct S1_554D78 { void g(); };
struct S0_554D78 { char pad1C[0x1C]; S1_554D78* m1C; };
void f_554D78(S0_554D78* p) { p->m1C->g(); }
