typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_49D4A0;
struct S1_49D4A0;
struct S1_49D4A0 { void g(); };
struct S0_49D4A0 { char pad5C[0x5C]; S1_49D4A0* m5C; };
void f_49D4A0(S0_49D4A0* p) { p->m5C->g(); }
