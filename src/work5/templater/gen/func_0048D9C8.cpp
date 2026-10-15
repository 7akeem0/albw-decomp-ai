typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_48D9C8;
struct M_48D9C8;
struct M_48D9C8 { void g(); };
struct S0_48D9C8 { char pad134[0x134]; M_48D9C8 m134; };
void f_48D9C8(S0_48D9C8* p) { p->m134.g(); }
