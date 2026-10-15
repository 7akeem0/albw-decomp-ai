typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_48CF54;
struct S0_48CF54 { char pad4[0x4]; u32 m4; };
void f_48CF54(S0_48CF54* p, u32 v) { p->m4 = v; }
