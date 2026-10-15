typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_1132C0;
struct S1_1132C0;
struct S1_1132C0 { char padC8[0xC8]; u32 mC8; };
struct S0_1132C0 { char pad10[0x10]; S1_1132C0* m10; };
void f_1132C0(S0_1132C0* p, u32 v) { p->m10->mC8 = v; }
