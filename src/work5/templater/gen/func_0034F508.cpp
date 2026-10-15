typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_34F508;
struct S0_34F508 { char pad2C8[0x2C8]; f32 m2C8; };
void f_34F508(S0_34F508* p, f32 v) { p->m2C8 = v; }
