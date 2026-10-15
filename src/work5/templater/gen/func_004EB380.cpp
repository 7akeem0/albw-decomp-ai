typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4EB380;
struct S1_4EB380;
struct S1_4EB380 { void g(); };
struct S0_4EB380 { char pad48[0x48]; S1_4EB380* m48; };
void f_4EB380(S0_4EB380* p) { p->m48->g(); }
