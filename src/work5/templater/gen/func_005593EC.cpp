typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T1_5593EC { char pad44[0x44]; u32 m; };
struct T0_5593EC { char pad2C[0x2C]; T1_5593EC* q; };
bool f_5593EC(T0_5593EC* p) { return p->q->m == 0; }
