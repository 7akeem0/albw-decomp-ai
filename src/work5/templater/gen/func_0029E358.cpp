typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_29E358 { char pad4BD[0x4BD]; u8 m; };
struct S_29E358 { char pad14[0x14]; T_29E358* q; };
void f_29E358(S_29E358* p) { if (p->q) p->q->m = 1; }
