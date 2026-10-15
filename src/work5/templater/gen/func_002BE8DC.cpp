typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2BE8DC;
struct S0_2BE8DC { char pad184[0x184]; char m184; };
char* f_2BE8DC(S0_2BE8DC* p) { return &p->m184; }
