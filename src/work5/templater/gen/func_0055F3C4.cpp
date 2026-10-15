typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_55F3C4;
struct S0_55F3C4 { char pad64[0x64]; char m64; };
char* f_55F3C4(S0_55F3C4* p) { return &p->m64; }
