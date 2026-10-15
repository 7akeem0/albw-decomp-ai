typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4EBC08;
struct S1_4EBC08;
struct S1_4EBC08 { void g(); };
struct S0_4EBC08 { char pad24[0x24]; S1_4EBC08* m24; };
void f_4EBC08(S0_4EBC08* p) { p->m24->g(); }
