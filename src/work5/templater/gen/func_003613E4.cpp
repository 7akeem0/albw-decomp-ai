typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3613E4;
struct S1_3613E4;
struct S1_3613E4 { char pad6BC[0x6BC]; u8 m6BC; };
struct S0_3613E4 { char pad10[0x10]; S1_3613E4* m10; };
void f_3613E4(S0_3613E4* p, u8 v) { p->m10->m6BC = v; }
