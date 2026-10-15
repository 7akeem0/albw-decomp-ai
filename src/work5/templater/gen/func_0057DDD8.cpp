typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_57DDD8;
struct S0_57DDD8 { char pad8[0x8]; u32 m8; };
u32 f_57DDD8(S0_57DDD8* p) { return p->m8; }
