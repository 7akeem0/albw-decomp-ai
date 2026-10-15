typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_4CF468 { void h(int, int); };
struct S_4CF468 { char pad410[0x410]; T_4CF468* q; };
void f_4CF468(S_4CF468* p) { p->q->h(0, 0); }
