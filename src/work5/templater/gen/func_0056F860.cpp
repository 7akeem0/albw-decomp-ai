typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T1_56F860 { u8 m; };
struct T0_56F860 { char padC[0xC]; T1_56F860* q; };
bool f_56F860(T0_56F860* p) { return p->q->m == 2; }
