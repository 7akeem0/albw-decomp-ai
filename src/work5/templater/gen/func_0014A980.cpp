typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_14A980;
struct S1_14A980;
struct S1_14A980 { char pad18B[0x18B]; u8 m18B; };
struct S0_14A980 { char pad1C[0x1C]; S1_14A980* m1C; };
void f_14A980(S0_14A980* p, u8 v) { p->m1C->m18B = v; }
