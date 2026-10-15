typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2A6B90;
struct S1_2A6B90;
struct S1_2A6B90 { void g(); };
struct S0_2A6B90 { char pad9DC[0x9DC]; S1_2A6B90* m9DC; };
void f_2A6B90(S0_2A6B90* p) { p->m9DC->g(); }
