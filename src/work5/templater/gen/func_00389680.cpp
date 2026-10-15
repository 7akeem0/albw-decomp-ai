typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_389680 { void h(int, int); };
struct S_389680 { char pad460[0x460]; T_389680* q; };
void f_389680(S_389680* p) { p->q->h(0, 0); }
