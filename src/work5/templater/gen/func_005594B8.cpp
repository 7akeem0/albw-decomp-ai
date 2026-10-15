typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T1_5594B8 { char pad44[0x44]; u32 m; };
struct T0_5594B8 { char pad2C[0x2C]; T1_5594B8* q; };
bool f_5594B8(T0_5594B8* p) { return p->q->m == 0; }
