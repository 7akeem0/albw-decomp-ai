typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_40EF34;
struct S0_40EF34 { char pad114[0x114]; char m114; };
char* f_40EF34(S0_40EF34* p) { return &p->m114; }
