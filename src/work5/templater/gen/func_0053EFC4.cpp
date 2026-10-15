typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T1_53EFC4 { char pad52[0x52]; u16 m; };
struct T0_53EFC4 { char pad4C[0x4C]; T1_53EFC4* q; };
bool f_53EFC4(T0_53EFC4* p) { return p->q->m == 113; }
