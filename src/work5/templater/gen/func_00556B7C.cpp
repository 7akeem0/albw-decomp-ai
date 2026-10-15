typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T1_556B7C { char pad42[0x42]; u16 m; };
struct T0_556B7C { char pad14[0x14]; T1_556B7C* q; };
bool f_556B7C(T0_556B7C* p) { return p->q->m == 46; }
