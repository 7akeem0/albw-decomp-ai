typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T1_54743C { char pad80[0x80]; u32 m; };
struct T0_54743C { char pad18[0x18]; T1_54743C* q; };
bool f_54743C(T0_54743C* p) { return p->q->m == 2; }
