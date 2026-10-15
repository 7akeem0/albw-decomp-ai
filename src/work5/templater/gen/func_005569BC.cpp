typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T1_5569BC { char pad42[0x42]; u16 m; };
struct T0_5569BC { char pad14[0x14]; T1_5569BC* q; };
bool f_5569BC(T0_5569BC* p) { return p->q->m == 103; }
