typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_56F704;
struct S0_56F704 { char pad44[0x44]; u16 m44; };
u16 f_56F704(S0_56F704* p) { return p->m44; }
