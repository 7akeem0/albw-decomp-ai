typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_56CAB8;
struct S1_56CAB8;
struct S1_56CAB8 { void g(); };
struct S0_56CAB8 { char pad4[0x4]; S1_56CAB8* m4; };
void f_56CAB8(S0_56CAB8* p) { p->m4->g(); }
