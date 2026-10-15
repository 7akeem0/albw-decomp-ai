typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_420F00;
struct S0_420F00 { char pad11[0x11]; u8 m11; };
void f_420F00(S0_420F00* p) { p->m11 = 0x0; }
