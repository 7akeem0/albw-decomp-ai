typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_224BE4;
struct S0_224BE4 { char pad5FD[0x5FD]; u8 m5FD; };
void f_224BE4(S0_224BE4* p) { p->m5FD = 0x1; }
