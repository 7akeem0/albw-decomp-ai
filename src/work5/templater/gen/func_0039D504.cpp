typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_39D504 { void h(int, int); };
struct S_39D504 { char pad4D4[0x4D4]; T_39D504* q; };
void f_39D504(S_39D504* p) { p->q->h(0, 0); }
