typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3615E8;
struct S1_3615E8;
struct S1_3615E8 { void g(); };
struct S0_3615E8 { char pad10[0x10]; S1_3615E8* m10; };
void f_3615E8(S0_3615E8* p) { p->m10->g(); }
