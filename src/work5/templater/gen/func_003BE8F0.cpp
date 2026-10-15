typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3BE8F0;
struct S0_3BE8F0 { char pad6C[0x6C]; char m6C; };
char* f_3BE8F0(S0_3BE8F0* p) { return &p->m6C; }
