typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_410434;
struct S0_410434 { char pad124[0x124]; char m124; };
char* f_410434(S0_410434* p) { return &p->m124; }
