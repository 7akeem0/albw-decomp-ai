typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_1756AC { void h(int, int); };
struct S_1756AC { char pad430[0x430]; T_1756AC* q; };
void f_1756AC(S_1756AC* p) { p->q->h(0, 0); }
