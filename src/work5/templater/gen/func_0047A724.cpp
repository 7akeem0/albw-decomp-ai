typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_47A724;
struct S1_47A724;
struct S1_47A724 { void g(); };
struct S0_47A724 { char pad158[0x158]; S1_47A724* m158; };
void f_47A724(S0_47A724* p) { p->m158->g(); }
