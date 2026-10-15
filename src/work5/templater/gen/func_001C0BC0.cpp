typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_1C0BC0 { void h(int, int); };
struct S_1C0BC0 { char pad430[0x430]; T_1C0BC0* q; };
void f_1C0BC0(S_1C0BC0* p) { p->q->h(0, 0); }
