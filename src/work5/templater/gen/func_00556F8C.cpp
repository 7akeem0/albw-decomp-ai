typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T1_556F8C { char pad42[0x42]; u16 m; };
struct T0_556F8C { char pad2C[0x2C]; T1_556F8C* q; };
bool f_556F8C(T0_556F8C* p) { return p->q->m == 23; }
