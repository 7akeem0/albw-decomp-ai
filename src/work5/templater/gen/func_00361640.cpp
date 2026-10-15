typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_361640;
struct S1_361640;
struct S1_361640 { char pad610[0x610]; u32 m610; };
struct S0_361640 { char pad10[0x10]; S1_361640* m10; };
u32 f_361640(S0_361640* p) { return p->m10->m610; }
