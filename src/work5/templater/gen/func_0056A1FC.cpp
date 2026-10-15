typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_56A1FC;
struct S0_56A1FC { char pad44[0x44]; u32 m44; };
u32 f_56A1FC(S0_56A1FC* p) { return p->m44; }
