typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3AF430;
struct S0_3AF430 { char pad38[0x38]; u8 m38; };
void f_3AF430(S0_3AF430* p) { p->m38 = 0x1; }
