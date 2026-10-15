typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_57DDD0;
struct S0_57DDD0 { char pad4[0x4]; u32 m4; };
u32 f_57DDD0(S0_57DDD0* p) { return p->m4; }
