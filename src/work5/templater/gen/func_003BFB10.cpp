typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3BFB10;
struct S0_3BFB10 { char pad6C[0x6C]; char m6C; };
char* f_3BFB10(S0_3BFB10* p) { return &p->m6C; }
