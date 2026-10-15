typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_399490;
struct S1_399490;
struct M_399490;
struct M_399490 { void g(); };
struct S1_399490 { char pad11B0[0x11B0]; M_399490 m11B0; };
struct S0_399490 { char pad48[0x48]; S1_399490* m48; };
void f_399490(S0_399490* p) { p->m48->m11B0.g(); }
