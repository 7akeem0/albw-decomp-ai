typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3B74E4;
struct S1_3B74E4;
struct S1_3B74E4 { void g(); };
struct S0_3B74E4 { char pad48[0x48]; S1_3B74E4* m48; };
void f_3B74E4(S0_3B74E4* p) { p->m48->g(); }
