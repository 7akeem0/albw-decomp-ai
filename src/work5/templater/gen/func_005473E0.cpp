typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T1_5473E0 { char pad90[0x90]; u8 m; };
struct T0_5473E0 { char pad14[0x14]; T1_5473E0* q; };
bool f_5473E0(T0_5473E0* p) { return p->q->m == 4; }
