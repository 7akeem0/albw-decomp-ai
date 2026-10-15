typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_41BD78;
struct S0_41BD78 { char pad88[0x88]; u32 m88; u32 m8C; };
void f_41BD78(S0_41BD78* p, u32 a, u32 b) { p->m88 = a; p->m8C = b; }
