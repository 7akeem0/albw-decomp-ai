typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_295F98;
struct S1_295F98;
struct S1_295F98 { void g(); };
struct S0_295F98 { char pad4C[0x4C]; S1_295F98* m4C; };
void f_295F98(S0_295F98* p) { p->m4C->g(); }
