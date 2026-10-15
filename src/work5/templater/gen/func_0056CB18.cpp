typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_56CB18;
struct S1_56CB18;
struct S1_56CB18 { void g(); };
struct S0_56CB18 { char pad4[0x4]; S1_56CB18* m4; };
void f_56CB18(S0_56CB18* p) { p->m4->g(); }
